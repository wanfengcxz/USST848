int sum = 0

for(int i = 0;i<size;i++){
	sum += i;
}


int i = 0;
while(i<size){
	sum += i;
	i++;
}

for(int i = 0;i<10;i++){
	if (i == 5)
		break;
}

for(int i = 0;i<10;i++){
	if (i > 7)
		continue;
}

int i = 1;
int arr[3] = {1,2,3}
arr[i++] = 5;


int i = 1;
int j = i++;
printf("%d", j)

int i = 1;
int j = ++i;
printf("%d", j)


// i++
int temp;
temp = i;
i = i + 1;
return temp;

// ++i
i = i + 1
return i

#define MaxSize 50
typedef struct
{
	int arr[MaxSize];
	int length;
}SeqList;

struct Student
{
	int age;
	char *name;
	
};

struct Student stu;


typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode, * LinkList


// 请求系统分配 4 字节的内存空间，
// 并返回第一字节的地址，然后赋给指针变量p
int *p = (int *)malloc(4);
free(p)


# include <stdlib.h>
void *malloc(unsigned long size);
void free (void* ptr);

L = (LinkList)malloc(sizeof(LNode));

typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode, * LinkList

int fun(LinkList &L)

int * p1,p2;

int *p1, *p2;

// 1.绪论+线性表+++++++++++++++++++++++++++++++++++

typedef struct 
{
	char *code;
	char *name;
	int age;
}Student;


#define MaxSize 50
typedef struct
{
	Student stu_arr[MaxSize];
	int length;
}StudentList;

typedef struct LNode{
	Student data;
	struct LNode *next;
}StudentNode, * StudentList



#define MaxSize 50
typedef struct 
{
	int data[MaxSize];
	int length;
}SeqList;

void InitList(SeqList &L){
	for (int i=0;i<L.length;i++)
		L.data[i] = 0;
	L.length = 0;
}

#define InitSize 100
typedef struct 
{
	int *data;
	int MaxSize, length;
};

void InitList(SeqList &L){
	// L.data = new int[InitSize];
	L.data = (int *)malloc(sizeof(int)*InitSize);
	L.MaxSize = InitSize;
	L.length = 0;
}


int LocateElem(SeqList L, int x){
	for (int i = 0;i<L.length;i++){
		if (L.data[i] == x)
			return i+1;
	}
	return -1;
}

int CountAElem(SeqList L, int x){
	int num = 0;
	for (int i = 0;i<L.length;i++){
		if (L.data[i] == x)
			num++;
	}
	return num;
}

int find(int arr[], int n, int target){
	for (int i = 0;i<n;i++){
		if (arr[i] == target)
			return i;
	}
}

void createList_tail(LNode *&C, int a[], int n){
	LNode *s;
	C = (LNode *)malloc(sizeof(LNode));
	C->next = NULL;
	LNode *tail = C;
	for (int i = 0;i<n;i++){
		s = (LNode *)malloc(sizeof(LNode));
		s->data = a[i];
		tail->next = s;
		tail = tail->next;
	}
	tail->next = NULL;
}

void createList_head(LNode *&C, int a[], int n){
	LNode *s;
	C = (LNode *)malloc(sizeof(LNode));
	C->next = NULL;
	C->data = a[0];
	for (int i = 1;i<n;i++){
		s = (LNode *)malloc(sizeof(LNode));
		s->data = a[i];
		s->next = C;
		C = s;
	}
}

void InitList(LNode *L){
	L = (LNode *)malloc(sizeof(LNode));
	L->next = L;
}

bool isTail(LNode *L, LNode *p){
	return p->next == L;
}

void InitList(DLNode *L){
	L = (DLNode *)malloc(sizeof(DLNode));
	L->next = L;
	L->prior = L;
}

bool isTail(DLNode *L, DLNode *p){
	return p->next == L;
}

#define MaxSize 50
typedef struct 
{
	int data;
	int next;
}SLinkList[MaxSize];

void FindElem(SLinkList L, int e){
	for (int i = 0;i<MaxSize;i++){
		if (L[i].next != -2 && L[i].data == e){
			return i;
		}
	}
}



int Find(SLinkList L, int e){
	for (int i = 0;i<MaxSize;i++){
		if (L[i].next != -2 && L[i].data == e)
			return i;
	}
}

bool InsertElem(SLinkList L, int i,int e){
	int j = 0;
	for (;j<MaxSize;j++){
		if (L[j].next == -2){
			break;
		}
	}
	if (j >= MaxSize)
		return false;
	
	L[j].data = e;
	int pre = 0;
	i = i-1;
	while(i > 0){
		pre = L[pre].next;
		i--;
	}
	L[j].next = L[pre].next;
	L[pre].next = j;
	return true;
}

// 假设元素从小到大排列
bool Merge(SeqList A,SeqList B,SeqList &C){
	if (A.length + B.length > C.length)
		return false;
	int i = 0, j = 0, k = 0;
	while(i<A.length && j<B.length){
		if (A.data[i] < B.data[j])
			C.data[k++] = A.data[i++];
		else
			C.data[k++] = B.data[j++];
	}
	while (i != A.length){
		C.data[k++] = A.data[i++];
	}
	while (j != B.length){
		C.data[k++] = B.data[j++];
	}
	C.length = k;
	return true;
}



int ListIsEqual(LinkList A, LinkList B){
	A = A->next;
	B = B->next;
	while(A&&B){
		if (A->data != B->data)
			return 0;
		A = A->next;
		B = B->next;
	}

	if (A) return 0;
	if (B) return 0;
	return 1;
}

// A和B都为空 1
// A和B有一个不为空 0

// A空 B不空
// A不空 B空
// A空 B空

// A不空 B不空

// 母题


int ListIsEqual(LinkList A, LinkList B){
	return IsNodeEqual(A->next, B->next);
}

int IsNodeEqual(LNode *a, LNode *b){
	if (a&&b){
		if (a->data != b->data)
			return 0;
		return IsNodeEqual(a->next, b->next);
	}
	if (a) return 0;
	if (b) return 0;
	return 1;
}

int ListIsEqual(LinkList A, LinkList B){
	return IsNodeEqual(A->next, B->next);
}


int IsNodeEqual(LNode *a, LNode *b){
	if (!a && !b)
		return 1;
	else if (!a || !b)
		return 0;
	else {
		if (a->data != b->data)
			return 0;
		return IsNodeEqual(a->next, b->next);
	}
}

// LNode *pa;
// int ai;
// index i

void setMinus(LinkList &A, LinkList B){
	 LNode *p, *q;
	 p = (LNode *)malloc(sizeof(LNode));
	 p->next = A;
	 A = p;
	 while(B!=NULL){
	 	p = A;
	 	while(p->next != NULL){
	 		if (B->data == p->next->data){
	 			q = p->next;
	 			p->next = p->next->next;
	 			free(q);
	 		}
	 		else
	 			p = p->next;
	 	}
	 	B = B->next;
	 }
	 p = A;
	 A = A->next;
	 free(p);
}

// 无头结点
// A=AUB
void setUnion(LinkList &A, LinkList B){
	LNode *p, *q;
	p = (LNode *)malloc(sizeof(LNode));
	p->next = A;
	A = p;
	while(B){
		p = A->next;
		while(p){
			if (p->data == B->data){
				B = B->next;
				break;
			}
			else
				p = p->next;
		}
		if (p == NULL){
			q = (LNode *)malloc(sizeof(LNode));
			q->data = B->data;
			q->next = A->next;
			A->next = q;
		}
		B = B->next;
	}
	p = A;
	A = A->next;
	free(p);
}


void setMinus(LinkList &A, LinkList B){
	// 添加一个头结点 便于操作
	LNode *p = (LNode *)malloc(sizeof(LNode));
	LNode *tmp;
	p->next = A;
	A = p;
	while(B){
		p = A;
		while(p->next != NULL){
			if (p->next->data == B->data){
				// 删除
				tmp = p->next;
				p->next = p->next->next;
				free(tmp);
			}
			else
				p = p->next;
		}
		B = B->next;
	}
	p = A;
	A = A->next;
	free(p);
}


void Rotation(int matrix[m][n]){
	int tmp;
	for (int i = 0;i<n;i++){
		for (int j = 0;j<m/2;j++){
			tmp = matrix[i][j];
			arr[i][j] = arr[i][m-j-1];
			arr[i][m-j-1] = tmp;
		}
	}

}



// 数组是C语言内置的，没有自己的结构体定义
#define n 50
void Rotation(int matrix[n][n]){
	int tmp;
	// 对每一行
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n/2;j++){
			tmp = matrix[i][j];
			matrix[i][j] = matrix[i][n-i-1];
			matrix[i][n-i-1] = tmp;
		}
	}

}


void LinkListReverse(LinkList &L){
	LNode *p = L->next;
	LNode *tmp;
	L->next = NULL;
	while(p!=NULL){
		tmp = p;
		p = p->next;
		tmp->next = L->next;
		L->next = tmp;
	}

}

p->next = p->next->next;
free(p->next->prior);
p->next->prior = p;

void Reverse(LNode *&head){
	LNode *pre = NULL;
	LNode *cur = head->next;
	if (cur == NULL)
		return ;
	LNode *tmp = cur->next;
	while(tmp != NULL){
		cur->next = pre;
		pre = cur;
		cur = tmp;
		tmp = tmp->next;
	}
	cur->next = pre;
	head->next = cur;
}


void Reverse(LinkList &L){
	LNode *pre = NULL;
	LNode *cur = L->next;
	LNode *tmp;
	if (cur == NULL)
		return ;
	tmp = cur->next;
	while(tmp){
		cur->next = pre;
		pre = cur;
		cur = tmp;
		tmp = tmp->next;
	}
	cur->next = pre;
	L->next = cur;
}


=========== stack =============

// 顺序栈
void InitStack(SeqStack &S){
	S.top = -1;
}

bool IsEmpty(SeqStack S){
	return S.top == -1;
}

bool Push(SeqStack &S, int x){
	if (S.top == MaxSize-1){
		return false;
	}
	S.data[++S.top] = x;
	return true;
}

bool Pop(SeqStack &S, int &e){
	if (S.top == -1)
		return false;
	e = S.data[S.top--];
	return true;
}

bool Top(SeqStack S, int &e){
	if (S.top == -1)
		return false;
	x = S.data[S.top];
	return true;
}


// 链栈
// 有头结点
bool Push(LinkStack &S, int e){
	LNode *p = (LNode *)malloc(sizeof(LNode));
	p->data = e;
	p->next = S->next;
	S->next = p;
	// 无头结点
	// p->next = S;
	// S = p;
}

// 有头结点
bool Pop(LinkStack S, int &e){
	if (S->next == NULL)
		return false;
	LNode *p = S->next;
	S->next = S->next->next;
	e = p->data;
	free(p);
	return true;
}

// 无头结点
bool Pop(LinkStack &S, int &e){
	if (S == NULL)
		return false;
	LNode *p = S;
	S = S->next;
	e = p->data;
	free(p);
	return true;
}


void InitQueue(SeqQueue &Q){
	Q.front = 0;
	Q.rear = 0;
}

bool EnQueue(SeqQueue &Q, int e){
	if (Q.rear == MaxSize)
		return false;
	Q.data[Q.rear++] = e;
	return true;
}


// 循环队列
bool IsEmpty(SeqQueue &q){
	return Q.rear == Q.front;
}

bool EnQueue(SeqQueue &Q, int x){
	if ((Q.rear + 1)%MaxSize == Q.front)
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1)%MaxSize;
}

// 十进制转化为二进制
void convert2(int x){
	LinkStack S;
	int e;
	while(x){
		Push(S, x%2);
		x = x/2;
	}
	while(!IsEmpty(S)){
		Pop(S, e);
		cout << e;
	}
}

int EvaluateExpression(string exp){
	InitStack(S_OP);
	InitStack(S_NUM);
	for (int i = 0;i<exp.size();i++){
		if (!isOP(exp[i])){
			Push(S_NUM, exp[i])
		} else {
			switch (Precede(GetTop(S_OP), ch)){
				case '<':
					Push(S_OP, exp[i]);
					break;
				case '>':
					Pop(S_OP, theta);
					Pop(S_NUM, b);
					Pop(S_NUM, a);
					Push(S_NUM, Operate(a, theta, b));
					break;
				// 栈顶是'(' 且exp[i]是')'
				case '=':
					Pop(S_OP, x);
					break;
			}
		}
	}
	return GetTop(S_NUM);
}



// ++++++++++++++++++++++++++++++

void Traversal(TreeNode *node){
	if (node != nullptr){
		cout << node->data;
		Traversal(node->lchild);
		Traversal(node->rchild);
	}
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    if (root == nullptr) {
        return res;
    }

    stack<TreeNode*> stk;
    TreeNode* node = root;
    while (!stk.empty() || node != nullptr) {
        while (node != nullptr) {
            res.emplace_back(node->val);
            stk.emplace(node);
            node = node->left;
        }
        node = stk.top();
        stk.pop();
        node = node->right;
    }
    return res;
}




// 结点个数
int all=0;
void countAllNode(TreeNode *root){
    if (root!=nullptr){
        all++;
        countAllNode(root->lchild);
        countAllNode(root->rchild);
    }
}

int CountAllNode(TreeNode *root){
    if (root==nullptr)
        return 0;
    return CountAllNode(root->lchild)+CountAllNode(root->rchild)+1;
}

// 叶子结点个数
int getLeafNum(TreeNode *root){
    if (root==null)
        return 0;
    if (root->left==null&&root->right==null)
        return 1;
    else
        return getLeafNum(root->left)+getLeafNum(root->right);
}


void countAllNode(TreeNode *root, int &count){
	if (root != nullptr){
		count++;
		countAllNode(root->lchild, count);
		countAllNode(root->rchild, count);
	}
}

int count = 0;
countAllNode(root, count);

int heightRecur(BiTNode<T> *head) {
    int left = 0, right = 0;
    if (head == nullptr)
        return 0;
    left = heightRecur<T>(head->lchild) + 1;
    right = heightRecur<T>(head->rchild) + 1;
    return left > right ? left : right;
}

void CopyRecursion(TreeNode *T, TreeNode *&newT){
	if (T == nullptr)
		newT = nullptr;
	else{
		newT = new TreeNode;
		newT->data = T->data;
		CopyRecursion(T->lchild, newT->lchild);
		CopyRecursion(T->rchild, newT->rchild);
	}
}


void PostOrder(TreeNode *root){
	TreeNode *p_child = nullptr;
	TreeNode *cur = root;
	Stack S;
	InitStack(S);
	Push(S, cur);
	while(!s.empty()){
		cur = Top(S);
		if ( (!cur->lchild && !cur->rchild) ||
			(!p_child && (p_child==cur->lchild)||(p_child==cur->rchild)) ){
			cout << cur->data;
			Pop(S, cur);
			p_child = cur;
		}
		else{
			if (cur->rchild)
				Push(S, cur->rchild);
			if (cur->lchild)
				Push(S, cur->lchild);
		}
	}
}

typedef struct CSNode
{
	ElemType data;
	struct CSNode *firstchild, *nextsibling;
} CSNode, *CSTree;

void Traversal(TreeNode *root){
	Stack S;
	InitStack(S);

	TreeNode *node =root;

	while(node!=nullptr){

		Push(S, node);
		node = node->lchild;

		if (node == nullptr){
			Pop(S, node);
		}

	}
	return ;
}

// 先序 中左右
// 后序 左右中


#define MaxSize 50
typedef struct
{
	int arr[MaxSize];
	int len;

} Heap;

void createHeap(Heap heap){
	for (int i = heap.len/2-1;i>=0;i--)
		maxHeapify(heap.arr, i, heap.len-1);
}

void maxHeapify(int arr[], int s, int e){
	int dad=s;
    // 找到孩子节点
    int son=dad*2+1;
    // int son = dad<<1+1;
    // 判断左孩子是否存在
    while(son<=e){
        // 判断右孩子是否存在 并找出左右孩子中的最大值
        if (son+1<=e&&arr[son]<arr[son+1])
            ++son;
        // 如果某个孩子节点值大于父节点
        if (arr[dad]>arr[son])
            return ;
        else{
            // 交换
            swap(arr[dad],arr[son]);
            // 对于参与交换的节点，采用相同的办法继续向下调整
            dad=son;
            son=dad*2+1;
        }
    }
}

// 从尾部插入
bool heapInsert(Heap &heap, int val){
	if (heap.len == MaxSize)
		return false;
	heap.arr[heap.len++] = val;
	int curr = heap.len-1;
	while(curr>0){
		int root = (curr-1)/2;
		// int root = (curr-1)>>1;
		if (heap.arr[root] < heap.arr[curr])
			swap(heap.arr[root], heap.arr[curr]);
		else
			return true;
		curr = root;
	}
	return true;
}

// 从堆顶删除
bool heapPop(Heap &heap, int &val){
	if (heap.len == 0)
		return false;
	val = heap.arr[0];
	heap.arr[0] = heap.arr[heap.len-1];
	heap.len--;
	maxHeapify(heap.arr, 0, heap.len-1);
}


#define MaxSize 50
typedef struct
{
	int arr[MaxSize];
	int len;

} PriorityQueue;

// 从尾部插入
bool Push(PriorityQueue &q, int val){
	if (q.len == MaxSize)
		return false;
	q.arr[q.len++] = val;
	int curr = q.len-1;
	while(curr>0){
		int root = (curr-1)/2;
		// int root = (curr-1)>>1;
		if (q.arr[root] < val)
			swap(q.arr[root], q.arr[curr]);
		else
			return true;
		curr = root;
	}
	return true;
}

bool Top(PriorityQueue q, int &val){
	if (q.len == 0)
		return false;
	return q.arr[0];
}


// 从堆顶删除
bool Pop(PriorityQueue &q, int &val){
	if (q.len == 0)
		return false;
	val = q.arr[0];
	q.arr[0] = q.arr[q.len-1];
	q.len--;
	maxHeapify(q.arr, 0, q.len-1);
}

int size(PriorityQueue q){
	return q.len;
}

bool empty(PriorityQueue q){
	return q.len==0;
}

int EvaluateExpression(TreeNode *root){
	if (root->lchild == NULL && root->rchild == NULL)
		return root->data - '0';
	else {
		int lval = EvaluateExpression(root->lchild);
		int rval = EvaluateExpression(root->rchild);
		if (root->data == '-')
			return lval - rval;
		else if (root->data == '+')
			return lval + rval;
		else if (root->data == '*')
			return lval * rval;
		else
			return lval / rval;
	}

}


int len = 5;
int UFSets[5];

void InitUFSets(int UFSets[], int len){
	for (int i = 0;i<len;i++)
		UFSets[i] = i;	
}

int find(int UFSets[], int x)	
{
	while(UFSets[x] != x)
		x = UFSets[x];	
	return x;
}


void Union(int UFSets, int x, int y)                    
{
    int fx=find(UFSets, x), fy=find(UFSets, y);          
    if(fx != fy)                         
        UFSets[fx]=fy; 
}


// ++++++++ 串 +++++++++

#define MAXLEN 255
typedef struct 
{
	char ch[MAXLEN];
	int length;
} SString;

typedef struct
{
	char *ch;
	int length;
} HString;

typedef struct GLNode{
	// 1为表节点 0为原子节点
	int tag;
	ElemType data;
	struct GLNode *head, *tail;
} GLNode, *GList;

typedef struct{
	Stack s1;
	Stack s2;
} SQueue;


// ++++++++++++++
#define MVNum 100
typedef struct ArcNode{
	int adjvex;
	struct ArcNode *nextarc;
	int weight;
}ArcNode;

typedef struct VNode{
	VerTexType data;
	ArcNode *firstarc;
}VNode;

typedef struct {
	VNode vertices[MVNum];
	int n, e;
}AGraph


int visited[n]; // 初始化为0
// int visited[MVNum];
void DFS_A(AGraph G, int v){
	cout << v;
	visited[v] = 1;
	ArcNode *p = G.vertices[v].firstarc;
	while(p!=NULL){
		if (visited[p->adjvex] == 0)
			DFS(G, p->adjvex);
		p = p->nextarc;
	}
}

int visited[n]; // 初始化为0
// int visited[MVNum];
void DFS_M(MGraph G, int v){
	cout << v;
	visited[v] = 1;
	for (int i = 0;i<G.n;i++){
		if (G.arcs[v][i]!=0 && visited[i]==0)
			DFS_M(G, i);
	}
}

void DFSLoop(MGraph G, int v){
	int visited[MVNum];
	Init(visited); // 初始化为0
	Stack S;
	InitStack(S);
	Push(S, v);
	visited[v] = 1;
	while(!IsEmpty(S)){
		int currNode = Top(S);
		cout << currNode;
		Pop(S);

		for (int i = 0;i<G.n;i++){
			if (G.arcs[currNode][i]!=0 && visited[i] == 0){
				Push(S, i);
				visited[i] = 1;
			}
		}
	}
}

void DFSLoop(AGraph G, int v){
	int visited[MVNum];
	Init(visited); // 初始化为0
	Stack S;
	InitStack(S);
	Push(S, v);
	visited[v] = 1;
	while(!IsEmpty(S)){
		int currNode = Top(S);
		cout << currNode;
		Pop(S);

		ArcNode *p = G.vertices[currNode].firstarc;
		while(p){
			if (visited[p->adjvex] == 0){
				Push(S, p->adjvex);
				visited[p->adjvex] = 1;
			}
			p = p->nextarc;
		}
	}
}


void BFSLoop(MGraph G, int v){
	Queue Q;
	InitQueue(Q);
	int visited[MVNum];
	Init(visited);

	visited[v] = 1;
	EnQueue(Q, v);
	while(IsEmpty(Q)){
		int currNode = DeQueue(Q);
		cout << currNode;

		for (int i = 0;i<G.n;i++){
			if (G.arcs[currNode][i]!=0 && visited[i] == 0){
				EnQueue(Q, i);
				visited[i] = 1;
			}
		}
	}

}


// 无权图
void BFS_MinDistance(MGraph G, int v, int d[], int path[]){
	for (int i=0;i<G.n;i++){
		d[i] = MAX;
		path[i]=-1;
	}
	Queue Q;
	int visited[MVNum];
	visited[v] = 1;
	d[v] = 0;
	EnQueue(Q, v);
	while(IsEmpty(Q)){
		int u = DeQueue(Q);
		for (int i = 0;i<G.n;i++){
			if (G.arcs[u][i]!=0 && visited[i] == 0){
				d[i]=d[u]+1;
				path[i]=u;
				EnQueue(Q, i);
				visited[i] = 1;
			}
		}
	}

}

BSTNode * Search(BSTNode * T, int value){
	if (!T || value == T->data) return T;
	else if (value<T->data) return Search(T->lchild, value);
	else return Search(T->rchild, value);
}


int num = 0;
int s[MaxVNum];
int top=0;
int isVisited[MaxVNum];

// 有向图
int countCircle(MGraph G, int v, int n){
	// 将当前节点入栈，并置为已访问
	s[top++] = v;
	isVisited[v] = 1;
	// 遍历v的邻接顶点
	for (int i = 0;i<G.n;i++){
		if (G.edges[v][i] != 0){
			// i没有被访问过 则开启下一次递归
			if (!isVisited[i]){
				countCircle(G, i, n);
			}
			// i被访问过 则有一个环
			else {
				// 统计环的长度
				int count = 1, j = top-1;
				while(s[j]!=i){
					j--;
					count++;
				}
				if (count == n)
					num++;
			}
		}
		
	}
	// 回溯
	top--;
	isVisited[v] = 0;
}


for(int i=0;i<G.n;i++){
	// 遍历v的邻接顶点
	if (G.edge[v][i]!=0){
		if (!visited[i])
			DFS(1,num++);
		else{
			if(i==v2 && n == num)
				sum++;
		}
	}
}
// 回溯
num--;
visited[i] = 0;



int HashFun(int key){
	return key % Size;
}

#define MaxSize 100
#define NULLKEY 0
int SearchHash(HashTable HT, int key){
	int h0 = HashFun(key);
	if (HT[h0].key == NULLKEY) return -1;
	else if (HT[h0].key == key) return h0;
	// 线性探测法
	else{
		for(int i=1;i<MaxSize;i++){
			int hi = (h0+i)%MaxSize;
			if (HT[hi].key == NULLKEY) return -1;
			else if (HT[hi].key == key) return hi;
		}
		return -1;
	}
}

int InsertHash(HashTable HT, int key, OtherInfo info){
	int h0 = HashFun(key);
	if (HT[h0].key == NULLKEY || HT[h0].key == key || HT[h0].key == DELETED){
		HT[h0].key = key;
		HT[h0].otherInfo = info;
		return 1;
	}
	else{
		for(int i=1;i<MaxSize;i++){
			int hi = (h0+i)%MaxSize;
			// 为空
			if (HT[hi].key == NULLKEY || HT[hi].key == DELETED) {
				HT[hi].key = key;
				HT[hi].otherInfo = info;
				return 1;
			}
			// 已经有相同的key
			else if (HT[hi].key == key){
				// 更新otherinfo
				HT[hi].otherInfo = info;
				return 1;
			}
		}
		return -1;
	}
}

#define DELETED -1
int DeleteHash(HashTable &HT, int key){
	int h0 = HashFun(key);
	if (HT[h0].key == NULLKEY) return 0;
	else if (HT[h0].key==key){
		HT[h0].key = DELETED;
		return 1;
	}
	else{
		for(int i=1;i<MaxSize;i++){
			int hi = (h0+i)%MaxSize;
			if (HT[hi].key == NULLKEY) return 0;
			else if (HT[hi].key == key){
				HT[hi].key = DELETED;
				return 1;
			}
		}
		return 0;
	}
}

struct ListNode{
	int key;
	int value;
	struct ListNode *next;
}

#define Size 100
#define NULLKEY 0
typedef sturct {
	ListNode* bucket[Size];
}HashTable;

void InitHaskTable(HashTable ht){
	// key置为NULLKEY
	// next置为nullptr
	......
}

int HashFun(int key){
	return key % Size;
}


void Insert(HashTable &ht, int key, int val){
	int h0 = HashFun(key);
	// 在当前桶中寻找key
	ListNode *p = ht.bucket[h0];
	while(p){
		if (p->key == key){
			// 找到key则更新value
			p->value = val;
			return ;
		}
		p = p->next;
	}
	// 找不到key 则插入key
	p = new ListNode;
	p->key = key;
	p->value = val;
	p->next = nullptr;
	// 头插法
	if (ht.bucket[h0])
		p->next = ht.bucket[h0];	
	ht.bucket[h0] = p;
}


// 查找


// 删除
void myHashMapRemove(MyHashMap* obj, int key) 
{    
    List *preIt = NULL;
    List *curIt = obj->hashHead[key%MAXSIZE];
    //通过链表下遍历
    while (curIt != NULL) 
    {
        if (curIt->key == key) 
        {
            break;
        }
        preIt = curIt;
        curIt = curIt->next;
    }

    if(curIt == NULL)
    {
        //没有找到
        return;
    }

    //找到了
    if(preIt == NULL)
    {
        //等于表头
        obj->hashHead[key%MAXSIZE] = curIt->next;
    }
    else
    {

        preIt->next = curIt->next;
    }
    free(curIt);
}


// ******** bit vector ********
#define N 64 // 元素个数
#define BITPERINT 32
#define length (N-1)/BITPERINT+1

#define SHIFT 5
#define MASK 0x1F


int bitVector[length] = {0};

// i左移一位即i>>1 等价于 i/2
// i>>SHIFT 等价于 i/32

// i&MASK 取余 
// i&11111 ∈ [0, 31]
// 1<<((i&MASK)) 将1向左移位，最多移动31位

// 赋值函数：给位向量对应位置赋值为1

void set(int i, int bitVector[]){
	bitVector[i>>SHIFT] = bitVector[i>>SHIFT] | (1<<(i & MASK));
	// bitVector[i>>SHIFT] |= 1<<((i & MASK))
}

// 擦除函数：将对应位置赋值为0
void cls(int i){
	bitVector[i>>SHIFT] = bitVector[i>>SHIFT] & ~(1<<(i & MASK));
	// bitVector[i >> SHIFT] &= ~(1 << (i & MASK));
}


// 默认情况下 算法不人为指定增量d的值
void ShellSort(int a[], int n){
	int d, i, j;
	for (d=n/2;d>=1;d=d/2){
		for(i=d+1;i<=n;i++){
			if (a[i]<a[i-d]){
				a[0]=a[i];
				for(j=i-d;j>0 && a[0]<a[j];j=j-d)
					a[j+d]=a[j];
				a[j+d]=a[0];
			}
		}
	}
}
