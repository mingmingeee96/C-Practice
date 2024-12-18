#ifndef __AL_GRAPH_KRUSKAL__
#define __AL_GRAPH_KRUSKAL__

#include "DLinkedList.h"
#include "PriorityQueue.h"

#include "ALEdge.h"

enum {A, B, C, D, E, F, G, H, I, J};

typedef struct _ual
{
	int numV;
	int numE;
	List * adjList;
	int * visitInfo;
	PQueue pqueue;		// 간선의 가중치 정보 저장
} ALGraph;

// 이전 함수의 정의와 차이가 있음
void GraphInit(ALGraph * pg, int nv);

// 이전 함수와 동일
void GraphDestroy(ALGraph * pg);

// 이전 함수의 정의와 차이가 있음
void AddEdge(ALGraph * pg, int fromV, int toV, int weight);

// 이전 함수와 동일
void ShowGraphEdgeInfo(ALGraph * pg);

// 이전 함수와 동일
void DFShowGraphVertex(ALGraph * pg, int startV);

// 새로 추가된 함수
// 최소 비용 신장 트리의 구성성
void ConKruskalMST(ALGraph * pg);

// 가중치 정보 출력력
void ShowGraphEdgeWeightInfo(ALGraph * pg);

#endif