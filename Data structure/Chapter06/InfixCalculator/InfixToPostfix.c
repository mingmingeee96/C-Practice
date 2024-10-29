#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "InfixToPostfix.h"

// 연산자의 연산 우선순위 정보 반환
int GetOpPrec(char op)
{
	switch(op)
    {
    case '*':
    case '/':
    	return 5;	// 가장 높은 연산의 우선순위
    case '+':
    case '-':
    	return 3;	// 중간정도의 연산 우선순위
    case'(':
    	return 1;	// 가장 낮은 연산의 우선순위
    }
    
    return -1;	// 등록되지 않은 연산자 알림
}

// 연산자의 연산 우선순위 비교 및 처리 함수
int WhoPrecOp(char op1, char op2)
{
	int op1Prec = GetOpPrec(op1);
    int op2Prec = GetOpPrec(op2);
    
    if(op1Prec > op2Prec)		// op1의 연산 우선순위가 더 높을 경우
    	return 1;
    else if(op1Prec < op2Prec)	// op2의 연산 우선순위가 더 높을 경우
    	return -1;
    else						// op1과 op2의 연산 우선순위가 같은 경우
    	return 0;
}

// 중위 표기법을 후위 표기법으로 변환
void ConvToRPNExp(char exp[])
{
	Stack stack;
    int expLen = strlen(exp);
    char * convExp = (char*)malloc(expLen+1);	// 변환된 수식을 담는 공간 마련
    
    int i, idx = 0;
    char tok, popOp;
    
    memset(convExp, 0, sizeof(char)*expLen+1);	// 할당된 배열을 0으로 초기화
    StackInit(&stack);
    
    for(i=0; i<expLen; i++)
    {
    	tok = exp[i];		// exp로 전달된 수식을 한 문자씩 tok에 저장
        if(isdigit(tok))	// tok에 저장된 문자가 숫자인지 확인
        	convExp[idx++] = tok;	// 숫자일 경우 배열 convExp에 바로 저장
        else	// 숫자가 아닐 경우 (연산자일 경우)
        {
        	switch(tok)
            {
            case '(':				// 여는 소괄호일 경우
            	SPush(&stack, tok);	// 스택(쟁반)에 놓기
                break;
            case ')':				// 닫는 소괄호일 경우
            	while(1)			// 반복해서 연산자 우선순위 판단
                {
                	popOp = SPop(&stack);	// 스택에서 연산자를 꺼내기
                    if(popOp == '(')		// 연산자 '('를 만나면 반복 종료
                    	break;
                    convExp[idx++] = popOp;	// 배열 convExp에 연산자 저장
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            	while(!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0)
                // 스택이 비지 않았고 우선순위 확인 함수 확인시 0이상일 경우
                	convExp[idx++] = SPop(&stack);
                SPush(&stack, tok);
                break;
            }
        }
    }
    
    while(!SIsEmpty(&stack))			// 스택에 남아있는 모든 연산자들
    	convExp[idx++] = SPop(&stack);	// 배열 convExp에 저장
    
    strcpy(exp, convExp);	// 변환된 수식 exp에 복사
    free(convExp);			// convExp 배열 소멸
}