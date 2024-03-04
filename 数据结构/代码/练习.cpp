typedef struct{
	int data[MaxSize];
	int length;
}SeqList;


FindFirstElementEqualX

// 不要用拼音
//  fun() ×


// 假设x的类型为int
int FindFirstX(SeqList seq, int x){
	for(int i = 0;i<seq.length;i++){
		if (seq.data[i] == x)
			return i+1;
	}
	return -1;
}

void FindFirstX(SeqList seq, int x){
	for(int i = 0;i<seq.length;i++){
		if (seq.data[i] == x)
			return ;
	}

}


int x = FindFirstX(seq, x);


// length
// [0, length-1]

int FindFirstX(SeqList seq, ElemType x){

}




void reverseSeqList(SeqList &L){
	int tmp = 0;
	for(int i = 0;i<L.length/2;i++){
		tmp = L.data[i];
		L.data[i] = L.data[L.length-1-i];
		L.data[L.length-1-i] = tmp;
	}
}
















// [0, length-1]
int find_first_elem(SeqList L, ElemType x){
	for(int i = 0;i<L.length;i++){
		if (x == L.data[i])
			return i+1; // 次序
	}

	return -1;
}


int x = find_first_elem(L, x);

void find_first_elem(SeqList &L, ElemType x, int &i, int &j){
	for(int j = 0;j<L.length;j++){
		if (x == L.data[j]){
			i = j+1;
		}
	}

	i = -1;
}

int main(){
	return -1;
}

int i = 0;
int x = find_first_elem(L, x, i);






{
	int x = find_first_elem(L, i, x);


}


// 印象分
// 假设x为int类型
// 假设该顺序表是int类型


// 1 2 3
// 3 2 1

void reverseSeqList(SeqList &L){
	int temp;
	for(int i = 0;i<L.length/2;i++){
		// i ----- length-i-1;
		temp = L.data[i];
		L.data[i] = L.data[L.length-i-1];
		L.data[L.length-i-1] = temp;
	}
}

void reverseSeqListRecursion(SeqList &L, int i){
	if (i>=length/2){
		return ;
	}

	int temp = 0;
	temp = L.data[i];
	L.data[i] = L.data[L.length-i-1];
	L.data[L.length-i-1] = temp;
	reverseSeqListRecursion(L, i+1);
	return ;
}

int main(){
	reverseSeqListRecursion(L, 0);
	return 0;
}


#define n 25

// --------------------------------------------------------

#include <stdio.h>


// i和j里面放顺序表中和为target的两个元素的下标
void twoSum(SeqList L, int target, int &i, int &j){

}



int i = 0;
for(;i<length;i++){
	if ()
		break;
}
if (i == length){
	// 情况1
} else{
	// 情况2
}



// 对矩阵A(mxn)和B(nxk)做矩阵乘法，结果存储在C里面
void MatrixMultiply(int **A, int **B int m, int n, int k, int **C){

}


LNode *w = L;
if (value == L->data){
	L = L->next;
	free(w);
}

while(w->next){
	if (w->next->data == value){
		LNode *tmp = w->next;
		w->next = tmp->next;
		free(tmp);
	}
}

// 假设要创建一个无头结点的链表
void createLinkListHead(LNode *&C, int a[], int n){



}






int ** MatrixMultiply(int **A, int **B int m, int n, int k){
	int **C = (int **)malloc(sizeof(int *)*m);
	for(int i = 0;i<m;i++){
		C[i] = (int *)malloc(sizeof(int)*k);
	}
}


void createLinkListHead(LinkList &L, int a[], int n){
	LNode*s;
	L = (LNode *)malloc(sizeof(LNode));
	L->next = NULL;
	for(int i = 0;i<n;i++){
		s = (LNode *)malloc(sizeof(LNode));
		s->data = a[i];
		s->next = L->next;
		L->next = s;
	}


	s = L;
	L = L->next;
	free(s);

}

LNode *p;

LinkList == LNode *

LinkList &L
LNode *&L
LNode x;
LNode *p = &x;
LNode **pp = &p;


// 假设该链表没有头结点
void reverseLinkList(LNode *&L){

	// 创建头结点
	LNode *head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;

	
	while(L){
		LNode *work = L;
		L = L->next;
		work->next = head->next;
		head->next = work;
	}

	L = head->next;
	free(head);
}


// 假设该链表有头结点
void reverseLinkList(LNode *&L){

	// 创建头结点
	LNode *head = L;
	L = L->next;
	head->next = NULL;

	
	while(L){
		LNode *work = L;
		L = L->next;
		work->next = head->next;
		head->next = work;
	}
	L = head;
}

typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode, *LinkList;


 


// 假设L有头结点
void reverseLinkList(LNode *&L){
	LNode *A;
	A = L;
	L = L->next;
	A->next = NULL;
	while(L){
		work = L;
		L = L->next;
		work->next = A->next;
		A->next = work;
	}

}


// 假设有序表元素递增
void Merge(int *A, int n, int *B, int m, int *C){
	// i A  j B  k C
	int i = 0, j = 0, k = 0;
	
	while(i<n && j<m){
		if (A[i] < B[j]){
			// A[i]比较小 
			C[k++] = A[i++];
			// i++;
			// k++;
		} else {
			// B[j]比较小
			C[k] = B[j];
			j++;
			k++;
		}
	}

	// B[j, m-1]还没插入  A已经插完
	while(j<m){
		C[k] = B[j];
		k++;
		j++;
	}
	// A[i, n-1]还没插完  B已经插完
	while(i<n){
		C[k] = A[i];
		k++;
		i++;
	}
}












// 假设数据由小到大排列
// 函数参数说明
void Merge(int *A, int n, int *B, int m, int *C){
	int k = 0;
	int i = 0 , j = 0;
	for(;i<n&&j<m;){
		if (A[i] >= B[j])
			C[k++] = B[j++];
		else
			C[k++] = A[i++];
	}
	while(i<n)
		C[k++] = A[i++];
	while(j<m)
		C[k++] = B[j++];
}


// 假设元素从小到大排列
bool Merge(SeqList A,SeqList B,SeqList &C){
	if (A.length + B.length > C.MaxSize)
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

#define NULL 0


int LinkListIsEqual(LinkList A, LinkList B){
	LNode *pA = A->next;
	LNode *pB = B->next;

	while(pA != NULL && pB != NULL){
		if (pA->data == pB->data){
			pA = pA->next;
			pB = pB->next;
		} else {
			return 0;
		}
	}

	// pA空 pB空
	if (pA == NULL && pB == NULL)
		return 1;
	else 
	{
		// pA空 pB不为空
		// pA不为空 pB为空
		return 0;
	}

}















int LinkListIsEqual(LinkList A, LinkList B){
	int *a = A->next;
	int *b = B->next;
	

	while(a&&b){
		if (a->data != b->data)
			return 0;
		else {
			a = a->next;
			b = b->next;
		}
	}

	if (a == NULL && b == NULL)
		return 1;
	if (a == NULL)
		return 0;
	if (b == NULL)
		return 0;

}


void setMinus(LinkList &A, LinkList B){

	LinkList C = (LNode*)malloc(sizeof(LNode));
	C->next;

	LNode *pB = B;
	LNode *tmp;
	while(A != NULL){
		pB = B;
		while(pB != NULL){
			if (pB->data == A->data){
				// 相等
				tmp = A;
				A = A->next;
				free(tmp);
				break;
			} else {
				pB = pB->next;
			}
		}
		if (pB == NULL){
			// A指向的结点和B所有结点都不一样
			tmp = A;
			A = A->next;
			s = (LNode*)malloc(sizeof(LNode));
			// 头插法 插入C
			tmp->next = C->next;
			C->next = tmp;
		}
	}
	A = C->next;
	free(C);
}
















// 

void setMinus(LinkList &A, LinkList B){
	LNode *s = (LNode *)malloc(sizeof(LNode));
	s->next = NULL;

	s->next = A;
	A = s;

	LNode *work = A;
	LNode *tmp;
	while(work->next){
		LNode *pB = B;
		while(pB){
			if (work->next->data == pB->data){
				tmp = work->next;
				work->next = tmp->next; 
				free(tmp);
				break;
			} else{
				pB = pB->next;
			}
		}
		if (pB == NULL)
			work = work->next;
	}
	s = A;
	A = A->next;
	free(s);
}




void setMinus(LinkList &A, LinkList B){
	if (A== NULL || B==NULL)
		return ;

	LNode *C = (LNode *)malloc(sizeof(LNode));
	C->next = NULL;

	while(A){
		LNode *curr = A;
		A = A->next;
		LNode *work = B;
		while(work){
			if (curr->data == work->data)
				break;
			else 
				work = work->next;
		}
		if (work == NULL){
			// 头插
			curr->next = C->next;
			C->next = curr;
		} else {
			free(curr);
		}
	}
	A = C->next;
	free(C);
}


// 递归：函数调用A它本身


void div2(int x){
	// 首先想到 递归的终止条件
	if (x <= 1)
		return ;
	// 开启下一次递归
	div2(x/2);
}

void div2(int x){
	// 首先想到 递归的终止条件
	if (x > 1){
		// 开启下一次递归
		div2(x/2);
	}
}













void div2(int x){
	print("%d\n", x);
	// 结束条件
	if(x<=1){
		return ;
	} else {
		// 开启下一次递归
		div2(x/2);
	}
}


// int x = 6
// char *str = "110";
void convert(int x, char res[]){
	SeqStack S;
	while(x > 0){
		Push(S, x%2);
		x = x/2;
	}

	for(int i = 0;!Empty(S);i++){
		res[i] = '0' + Top(S);
		Pop(S);
	}
}


// 二进制字符串 通过printf输出
void convert_recursion(int x, char str[], int i){
	if (x > 0){
		str[i] = x%2;
		convert_recursion(x/2, str, i+1);
	}
}

// "011"

void convert(int x , char str[]){
	convert_recursion(x, str, 0);
	reverseStr(str);
}



// fib(4)
// fib(3)
// 斐波那契数列
int fib(int n){
	if (n == 1  || n == 2)
		return 1;
	if (n > 2){
		return fib(n-1)+fib(n-2);
	} else {
		return -1;
	}
}




// 1101
// char*str = "1101";

// str用来存储转换后的二进制字符串
void exchange(int x, char str[]){

}




void exchange(int x, char str[]){
	SeqStack S;
	while(x != 0){
		Push(S,x%2);
		x = x/2;
	}
	int i = 0;
	while(!Empty(S)){
		int tmp = '0' + Top(S);
		Pop(S);
		str[i] = tmp;
		i++;
	}
}



bool SharePush(ShareStack s, int x, int flag){
	if (flag == 1){
		// 进栈1
	} else if (flag == 0){
		// 栈二
	} else {
		return false;
	}
}


int IsNodeEqual(LNode *pA, LNode *pB){
	if (pA == NULL && pB == NULL){
		return 1; 
	}
	if (pA == NULL || pB == NULL){
		return 0;
	}
	if (pA->data == pB->data){
		int res = IsNodeEqual(pA->next, pB->next);
		return res;
	}
	return 0;
}

int ListIsEqual(LinkList A, LinkList B){
	return IsNodeEqual(A->next, B->next);
}



int String2Int(char str[]){
	int i = 0;
	int num = 0;
	while(str[i] != '\0'){
		num = num*10 + str[i]-'0';
	}

	return num;
}


int MaxList(LinkList L){
	int max = -999999;
	while(L != NULL){
		if (L->data > max)
			max = L->data;
	}

	return max;
}


LNode *  ==  LinkList
void MaxR(LinkList L, int &max){
	if (L != NULL){
		if (L->data > max)
			max = L->data;
		MaxR(L->next, max);
	}
}

int main(){

	int max = -999999;
	MaxR(L, max);
}









// 整个函数的调用  他就是一个栈
// 函数栈
void convert_recursion(int x, char str[]){
	if (x!=0){
		convert_recursion(x/2);
		printf("%d", x%2);
	}
}


int ListIsEqual(LinkList A, LinkList B){
	LinkList *pA = A->next;
	LinkList *pB = B->next;
	return NodeIsEqual(pA, pB);
}

int NodeIsEqual(LNode *pA, LNode *pB){
	if (pA != NULL && pB != NULL){
		if (pA->data == pB->data){
			return NodeIsEqual(pA->next, pB->next);
		} else {
			return 0;
		}
	}
	if (pA == NULL && pB == NULL)
		return 1;

	// pA == NULL pB != NULL 或 pA != NULL pB == NULL
	return 0;
}

int maxNum(LinkList L){
	int max = -9999999;
	while(L){
		if (L->data > max){
			max = L->data;
		}
	}
	return max;
}

// LinkList == LNode*
// L没有头结点
int maxNum(LNode* L, int maxNum){
	if (L){
		if (maxNum < L->data)
			maxNum = L->data;
		return maxNum(L->next, maxNum);
	}
	return maxNum;
}

void maxNum(LinkList L, int &maxNum){
	if (L){
		if (maxNum < L->data)
			maxNum = L->data;
		maxNum(L->next, maxNum);
	}
}


int main(){

	int res = maxNum(L, -999999);
	int max = -999999;
	maxNum(L, max);
	printf("%d",max);
}


void convert(int x, int n, char str[], int i){


}


// "123"
int convert(char str[]){

	int res =  0;
	for(int i = 0;str[i]!='\0';i++)
		res = res*10 + str[i]-'0';

	return res;
}


// 统计二叉树所有结点的个数
void countNodeNum(TreeNode *root, int &num){
	if (root != NULL){
		num++;
		countNodeNum(root->lchild, num);
		countNodeNum(root->rchild, num);
	}
}


int countNodeNum(TreeNode *root){
	if (root != NULL){
		return 1+countNodeNum(root->left)+countNodeNum(root->right);
	} else {
		return 0;
	}
}

void countLeafNodeNum(TreeNode *root, int &num){
	if (root != NULL){
		if (root->right == NULL && root->right == NULL)
			num++;
		else{
			countLeafNodeNum(root->left, num);
			countLeafNodeNum(root->right, num);
		}
	}
}


BitNode * == BitTree




// 复制二叉树
void CopyTree(TreeNode * root, TreeNode *&newT){
	if (root){
		newT = (TreeNode *)malloc(sizeof(TreeNode));
		newT->data = root->data;
		CopyTree(root->left, newT->left);
		CopyTree(root->right, newT->right);
	} else {
		newT = NULL;
	}
}


void PrintPath(){
	PrintFatherNodePath(root, 3, s);
	while(!Empty(S)){
		printf(Top(S));
		Pop(S);
	}
}

bool PrintFatherNodePath(TreeNode *root, int x, SeqStack &s){
	if (root == NULL)
		return false;

	if (root->data == x)
		return true;

	bool isPrintLeft = PrintFatherNodePath(root->left, x);
	if (isPrintLeft){
		Push(s, root->data);
		return true;
	} 
	if (PrintFatherNodePath(root->right, x)){
		// 输出结点的值
		Push(s, root->data);
		return true;
	}
	return false;
}

#define MaxSize 100

int stack[MaxSize];
int top = 0;

stack[top++] = root->data;
x = stack[top--];

int queue[MaxSize];
int front=0, rear=0;



queue[rear++] = x;
x = queue[front++];

int MaxWidth(TreeNode *root){
	if (root == NULL)
		return 0;

	TreeNode
}

#define MVNum 50
typedef struct{

	int arcs[MaxSize][MaxSize];
	int vexnum, arcnum;
	VerTexType vex[MaxSize];

} MGraph;


int visited[MVNum]; 
void DFS_A(AGraph G, int v){

	printf("%d", v);
	visited[v] = 1;
	ArcNode *p = G.vertices[v].firstarc;
	while(p!=NULL){
		if (visited[p->adjvex] == 0)
			DFS(G, p->adjvex);
		p = p->nextarc;
	}

}

// BiTree == BiTNode *
void PreOrder(TreeNode *root){
	if (root != NULL){
		printf("%d", root->data);
		PreOrder(root->left);
		PreOrder(root->right);
	}
}

// sum引用一个初始化为0的变量，用来统计结点的个数
void CountTreeNodeNum(TreeNode *root, int &sum){
	if (root != NULL){
		sum++;
		CountTreeNodeNum(root->left);
		CountTreeNodeNum(root->right);
	}
}


int CountTreeNodeNum(TreeNode *root){
	if (root != NULL)
		return 1+CountTreeNodeNum(root->left)+CountTreeNodeNum(root->right); 
	return 0;
}

{
	ListLength();
	avg = double(sum)/length;
}


bool isTree(MGraph G){
	int visited[MVNum];
	for(int i = 0;i<G.n;i++)
		visited[i] = 0;
	int Enum = 0, Vnum = 0;
	DFS(G, visited, 0, Enum, Vnum);
	if (Enum == (G.arcnum-1) && Vnum == G.vexnum)
		return true;
	return false;
}

void DFS_M(MGraph G, int visited[], int v,
	int &Enum, int &Vnum){
	visited[v] = 1;
	Vnum++;
	for(int i = 0;i<G.n;i++){
		if (v!=i && G.arcs[v][i] != MaxInt && visited[i] == 0){
			Enum++;
			DFS_M(G, visited, i, Enum, Vnum);
		}
	}
}


int visited[MVNum];
void ExistPath(AGraph G, int i, int j, int &isHave){
	if (i == j)
		isHave = 1;
	else {
		visited[i] = 1;
		ArcNode *p = G.vertices[i].firstarc;
		while(p!=NULL){
			int k = p->adjvex;
			if (visited[k] && isHave == 0){
				ExistPath(G, k, j, isHave);
			}
		}

	}
}

#define MaxSize 100
typedef struct 
{
	int s1[MaxSize];
	int s1_top;
	int s2[MaxSize];
	int s2_top;
} SqQueue;

void CopyTree(TreeNode *root, TreeNode *&newT){
	if (root){
		newT = (TreeNode *)malloc(sizeof(TreeNode));
		newT->data = root->data;
		CopyTree(root->left, newT->left);
		CopyTree(root->right, newT->right);
	} else {
		newT = NULL;
	}
}


void PrintPath(TreeNode *root, int x){
	bool isPath = false;
	DFS();
	return ;
}


void DFS(TreeNode *root, bool &isPath, int x){
	bool isX = false;
	if (root == NULL)
		return ;
	if (root->data == x){
		isX	= true;
		isPath = true;
	}
	else {
		DFS(root->left, isPath, x);
		if (isPath == false)
			DFS(root->right, isPath, x);
	}

	if (isPath && isX == false){
		printf("%d", root->data);
	}

}

bool isTree(AGraph G){
	int Enum = 0;
	int Vnum = 0;
	int visited[MVNum];
	for(int i = 0;i<G.n;i++)
		visited[i] = 0;
	DFS_A(G, 0, visited, Enum, Vnum);
	if (Vnum == G.vexnum && Enum == G.arcnum)
		return true;
	return false;
}

void DFS_A(AGraph G, int v, int visited[], int &Enum, int &Vnum){
	visited[v] = 1;
	Vnum++;
	ArcNode *p = G.vertices[v].firstarc;
	while(p){
		if (visited[p->adjvex] == 0){
			Enum++;
			DFS_A(G, p->adjvex, visited, Enum, Vnum);
		}
		p = p->nextarc;
	}
}

// 先序 中左右
// 后序 左右中


void heapSort(int arr[], int len){
    for(int i=len/2-1;i>=0;i--)
        maxHeapify(arr, i, len-1);
    for(int i=len-1;i>0;i--){
        swap(arr[0], arr[i]);
        maxHeapify(arr,0,i-1);
    }
}

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
	for(int i = 0;i<Size;i++)
		bucket[i] = nullptr;
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
void myHashMapRemove(HashTable &ht, int key) 
{   
	int h0 = key%MAXSIZE;
    ListNode *preIt = NULL;
    ListNode *curIt = ht.bucket[h0];
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
        ht.bucket[h0] = curIt->next;
    }
    else
    {
        preIt->next = curIt->next;
    }
    free(curIt);
}


// 无向图是否有环 DFS
// 三个顶点构成一个环
bool isCyclicUtil(AGraph G, int v, int visited[], int parent){
	visited[v] = 1;
	ArcNode *p = G.vertices[v].firstarc;
	while(p){
		int k = p->adjvex;
		if (visited[k] == 1 && k != parent)
			return true;
		// visited[k] = 1 k == parent
		// visited[k] = 0
		else if (visited[k] == 0){
			if (isCyclicUtil(G, k, visited, v))
				return true;
		}
		p = p->nextarc;
	}
	return false;
}

bool isCyclic(AGraph G){
	int visited[MVNum];
	for(int i = 0;i<G.n;i++)
		visited[i] = 0;
	// 适用于非连通图
	for(int i = 0;i<G.n;i++)
		if (visited[i] == 0 && isCyclicUtil(G, i, visited,-1))
			return true;
	return false;
}


// 有向图是否有环
// 拓扑排序 略
// 有向环：一条至少含有一条边，且起点和终点相同的有向路径。
bool isCyclicUtil(AGraph G, int v, int visited[], int isOnCurrSearchPath[]){

	visited[v] = 1;
	isOnCurrSearchPath[v] = 1;

	ArcNode *p = G.vertices[v].firstarc;
	while(p){
		int k = p->adjvex;
		if (isOnCurrSearchPath[k])
			return true;
		else if (visited[k] == 0)
			return isCyclicUtil(G, k, visited, isOnCurrSearchPath);
		p = p->nextarc;
	}

	isOnCurrSearchPath[v] = 0;
	return false;
}

bool isCyclic(AGraph G){
	int visited[MVNum];
	int isOnCurrSearchPath[MVNum];
	for(int i = 0;i<G.n;i++){
		visited[i] = 0;
		isOnCurrSearchPath[i] = 0;
	}
	// 适用于非连通图
	for(int i = 0;i<G.n;i++)
		if (visited[i] == 0 && isCyclicUtil(G, i, visited,isOnCurrSearchPath))
			return true;
	return false;
}