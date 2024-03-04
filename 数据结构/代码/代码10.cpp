void reverse(SeqList &L){
	int i = 0, j = L.len-1;
	while(i<j){
		swap(L.data[i], L.data[j]);
		i++, j--;
	}
}

void reverse(SeqList &L, int i, int j){
	if (i<j) {
		swap(L.data[i], L.data[j]);
		reverse(L, i+1, j-1);
	}
}

void delNum(int s, int t, SeqList &L){

	int i = 0, j = 0;
	while(j < L.len){
		if (L.data[j] <= t && L.data[j] >= s){
			j++;
		} else {
			L.data[i++] = L.data[j++];
		}
	}

}

m%L.len;

ListNode *p; ListNode *p2 = ;



// 把A和B求交集后放到C中
void merge(SeqList &A, SeqList &B, SeqList &C){
	if (A.len == 0) return ;
	int i = 0, k = 0;
	while(i<A.len){
		int j = 0;
		while(j<B.len){
			if (A.data[i] == B.data[j]){
				C.data[k++] = A.data[i];
				break;
			} else {
				j++;
			}
		} // break;
		i++;
	}
	C.len = k;
}


// 减少时间复杂度 空间复杂度会升高 空间换时间



#define N 100
#define M 1000
void matmul(int A[N][N])



A[0]

void matmul(int **A, int **B, int n, int m) {

}


// 默认是无头节点单链表

void reverse(ListNode *h){
	ListNode head;
	head.next = nullptr;

	ListNode *w = &head;
	ListNode *p;
	while(h){	
		p = h->next;
		h->next = w->next;
		w->next = h;
		h = p;
	}
}


#define N 100000
#define M 1e9

int h[N], e[N], ne[N], idx = 0;

void init(){
	for(int i = 0;i<N;i++)
		h[i] = -1;
}

int insert(int val){
	int adr = (val + M) % N;
	e[idx] = val, ne[idx] = h[adr], h[adr] = idx++;
}

bool find(int val){
	int adr = (val + M) % N;
	for(int i = h[adr];i!=-1;i=ne[i]){
		if (val == e[i]) {
			return true;
		}
	}
	return false;
}


#define MS 100000

int arr[MS], len;
int cnt[MS];

void topK(int num[], int n, int k, int ans[]){

	for(int i = 0;i<n;i++){
		int j = 0;
		while(j<len){
			if (num[i] == arr[j]) {
				cnt[j]++;
				break;
			}
			j++;
		}
		if (j == len) {
			arr[len] = num[i];
			cnt[len++] = 1;
		}
	}

	qsort(arr, cnt, 0, len-1);

	for(int i = 0;i<k;i++){
		ans[i] = arr[len-1-i];
	}

}


void qsort(int arr[],int cnt[], int l, int r){
	if (l>=r) return ;

	int x = cnt[(l+r)/2], i = l-1, j = r+1;
	while(i<j){
		do i++; while(cnt[i] < x);
		do j--; while(cnt[j] > x);
		if (i<j) {
			swap(arr[i], arr[j]);
			swap(cnt[i], cnt[j]);
		}
	}

	qsort(arr, cnt, l, j);
	qsort(arr, cnt, j+1, r);
}


void qsort(int arr[], int l, int r){
	if (l>=r) return ;

	int x = arr[(l+r)/2], i = l-1, j = r+1;
	while(i<j){
		do i++; while(arr[i] < x);
		do j--; while(arr[j] > x);
		if (i<j) {
			swap(arr[i], arr[j]);
		}
	}

	qsort(arr, l, j);
	qsort(arr, j+1, r);
}


#define N 100000
int tmp[N];
void merge_sort(int arr[], int l, int r){
	if (l>=r) return ;

	int mid = (l+r)/2;

	merge_sort(arr, l, mid), merge_sort(arr, mid+1, r);

	// [l, mid] [mid+1, r]
	int i = l, j = mid+1, k = 0;
	while(i<=mid && j<=r){
		if (arr[i] < arr[j]) tmp[k++] = arr[i++];
		else tmp[k++] = arr[j++];
	}
	while(i<=mid) tmp[k++] = arr[i++];
	while(j<=mid) tmp[k++] = arr[j++];

	for(i = 0, j = l;i<k;++i, ++j){
		arr[j] = tmp[i];
	}

}




void quick_sort(int arr[], int l, int r){
    if (l >= r) return;

    int x = arr[(l+r)/2], i = l-1, j = r+1;
    while(i<j){
        do i++; while(arr[i] < x);
        do j--; while(arr[j] > x);

        if(i < j) swap(arr[i], arr[j]);
    }

    quick_sort(arr, l , j);
    quick_sort(arr, j+1, r);
}


void quick_sort(int arr[], int l, int r){
    if (l >= r) return;

    int x = arr[(l+r)/2], i = l-1, j = r+1;
    while(i<j){
        do i++; while(arr[i] < x);
        do j--; while(arr[j] > x);

        if(i < j) swap(arr[i], arr[j]);
    }

    quick_sort(arr, l , j);
    quick_sort(arr, j+1, r);
}


#define N 10000
int arr[N];
int bs1(int l, int r, int t){
    while(l<r){
        int mid = (l+r)/2;
        if (arr[mid] >= t) r = mid;
        else l = mid+1;
    }
    return l;
}

int bs2(int l, int r, int t){
    while(l<r){
        int mid = l+r+1 >> 1;
        if (arr[mid] <= t) l = mid;
        else r = mid-1;
    }
    return l;
}


ListNode* reverseKGroup(ListNode* head, int k) {
        return help(head, k);
    }

ListNode* help(ListNode *h, int k) {
    if (h == nullptr) return nullptr;
    
    int cnt = 1;
    ListNode *tmp = h->next;
    while(tmp && cnt<k){
        cnt++;
        tmp = tmp->next;
    }
    if (cnt != k) return h;
    ListNode *p = help(tmp, k);
    ListNode *work = new ListNode();
    work->next = p;

    // 头插法
    while(h!=tmp){
        ListNode *s = h->next;
        h->next = work->next;
        work->next = h;
        h = s;
    }

    tmp = work->next;
    delete work;
    return tmp;
}





#define N 300
bool flag[N];
int selectedNum;
void Cnm(int n, int m, int idx){
	if (selectedNum == m) {
		for(int j = 1;j<=n;j++)
			if (flag[j]) printf("%d ", j);
		printf("/n");
	} else if (idx > n) {
		return ;
	} else {
		flag[idx] = false;
		Cnm(n, m, idx+1);
		flag[idx] = true;
		selectedNum++;
		Cnm(n, m, idx+1);
	}
}



int array_max(int arr[], int n){
	return array_max_recur(arr, n, 0);
}

int array_max_recur(int arr[], int n, int i){
	if (i == n-1) return arr[i];
	int tmp = array_max_recur(arr, n, i+1);
	if (tmp > arr[i]) return tmp;
	else return arr[i];
}

double LinkListMean(LNode *L){
	double sum = 0.0;
	int num = 0;
	count(L, sum, num);
	return sum/num;
}

void count(LNode *L, double &sum, int &num){
	if (L != nullptr) {
		sum += L->data;
		num++;
		count(L->next, sum, num);
	}
}

int num = 0;
double sum = 0.0;
int i = 0;
double LinkListMean(LNode *L){
	if (L != nullptr) {
		sum += L->data;
		num++;
		i++;
		LinkListMean(L->next);
		i--;
	}
	if (i == 0) return sum/num;
	else reutrn 0.0;
}

bool huiwen(char *str, int n){
	return help(str, 0, n-1);
}

bool help(char *str, int i, int j){
	if (i>=j) return true;
	if (str[i] != str[j]) return false;
	else return help(str, i+1, j-1);
}

double sqrt(double A, double p, double e){
	if (fabs(p*p-A) < e) return p;
	else return sqrt(A, (p+A/p)/2, e);
}

int ack(int m, int n){
	if (m == 0) return n+1;
	else if (m != 0 && n == 0) return ack(m-1, 1);
	else if (m != 0 && n!=0) return ack(m-1, ack(m, n-1));
}


#define MaxSize 10000
typedef struct ShareStack {
    int data[MaxSize];
    int top1;
    int top2;
} sstk;

switch (val)
    {
        case 1:
            printf("1层开!\n");
            break;


#define N 10000
void reversePrintLinkList(LNode *L){
	int stk[N], top = 0;
	while(L){
		stk[top++] = L->data;
		L = L->next;
	}
	while(top != 0) print("%d ", stk[--top]);
}


void PrintListRecur(LNode *L){
	if (L == nullptr) return ;
	print("%d ", L->data);
	reversePrintListRecur(L->next);
}

void reversePrintListRecur(LNode *L){
	if (L == nullptr) return ;
	reversePrintListRecur(L->next);
	print("%d ", L->data);
}

// 栈的简易写法
#define N 10000
int stk[N];
int top;

bool push(int x){
	if (top >= N) return false;
	stk[top++] = x; 
	return true;
}

int top(){
	if (top == 0) return -9999999;
	return stk[top-1];
}

bool pop(){
	if (top == 0) return false;
	top--;
	return true;
}

// 直接输出
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

// 放到字符串中
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

// 递归1
void convert_recursion(int x, char str[], int i){
	if (x > 0){
		str[i] = x%2 + '0';	// 也可以存储在数组中
		convert_recursion(x/2, str, i+1);
	}
}

void convert(int x , char str[]){
	convert_recursion(x, str, 0);
	reverseStr(str);
}

// 递归2
void convert_recursion(int x, char str[], int &i){
	if (x > 0){
		convert_recursion(x/2, str, i);
		str[i++] = x%2 + '0';
	}
}

// "011"

void convert(int x , char str[]){
	int i = 0;
	convert_recursion(x, str, i);
}

// 如果n>=10? 比如16进制
// 直接输出
void convertn(int x){
	LinkStack S;
	int e;
	while(x){
		Push(S, x%2);
		x = x/2;
	}
	while(!IsEmpty(S)){
		Pop(S, e);
		if (e >= 0 && e<=9) printf("%d", e);
		else printf("%c", 'A'+(e-10));
	}
}

typedef struct Stack{
	Queue q1,
	Queue q2,
} stk;

pop()
push()
top()


// 前缀和

// 位运算 二进制1的个数


int lower[26], upper[26];

for (int i = 0;i<s.len;++i){
	if (s.ch[i] < 'z' && s.ch[i] > 'a'){
		if (lower[s.ch[i] - 'a'] == 1) return false;
	}
	else 
}

return true;

void BigNumAdd(string &num1, string &num2, string &res){
	if (num2.len > num1.len) BigNumAdd(num2, num1, res);
	reverseStr(num1);
	reverseStr(num2);

	int carry = 0, tmp = 0, i = 0;
	for(;i<num1.len;++i){
		tmp = num1.ch[i] - '0' + carry;
		if (i < num2.len) tmp += num2.ch[i] - '0';
		carry = tmp/10;
		tmp = tmp%10;
		res.ch[i] = tmp + '0';
	}

	if (carry == 1) res.ch[i++] = '1';
	reverseStr(res);
	res.len = i;
}





// 前序遍历  一直往左 
void preOrder(TreeNode *root){

	TreeNode* p = root;
	stack<TreeNode*> s;
	while (!empty(S) || p)
	{
	    while (p)
	    {
	        push(S, p);
	        cout << p->data;
	        p = p->lchild;
	    }

	    if (!empty(S))
	    {
	        p = top(S);
	        pop(S);
	        p = p->rchild;
	    }
	}
}


// 中序遍历
void InOrder(TreeNode *root){

	TreeNode* p = root;
	stack<TreeNode*> s;
	while (!empty(S) || p)
	{
	    while (p)
	    {
	        push(S, p);
	        p = p->lchild;
	    }

	    if (!empty(S))
	    {
	        p = top(S);
	        pop(S);
	        cout << p->data;
	        p = p->rchild;
	    }
	}
}

int tmp;

TreeNode* findX(TreeNode *root, int x){
	tmp = x;
	return help(root);
}
TreeNode *help(TreeNode *root){
	......
}

int findPreOrderK(TreeNode *root, int &k){
	if (root == nullptr) return -1;
	if (k == 1) return root->data;
	k--;
	int tmp = findPreOrderK(root->left, k);
	if (tmp == -1) return findPreOrderK(root->right, k);
	else return tmp;
}

int findMin(TreeNode *root){
	int Min = 99999999;
	help(root, Min);
	return Min;
}

void help(TreeNode *root, int &Min){
	if (root == nullptr) return ;
	if (Min > root->data) Min = root->data;
	help(root->left);
	help(root->right);
}

int res = 0;
help(root->left, h+1);
help(root->right, h+1);


void reverse(string &str){
    int i = 0, j = str.size()-1;
    while(i<j){
        swap(str[i], str[j]);
        i++, j--;
    }
}

string addBinary(string a, string b) {
    if (a.size() < b.size()) return addBinary(b, a);
    reverse(a);
    reverse(b);

    int t = 0;
    string ans;
    for(int i = 0;i<a.size();i++){
        t += a[i]-'0';
        if (i<b.size()) t += b[i]-'0';
        ans += '0' + t%2;
        t = t/2;
    }
    if (t) ans += '0' + t;

    reverse(ans);

    return ans;
}


bool fun(TreeNode *root){
	// kong
	bool flag = true;
	help(root->left, root->right, flag);
}


void help(TreeNode *p, TreeNode *q, bool flag){
	if (p == nullptr && q == nullptr) return ;
	if (p == nullptr || q != nullptr) flag = false, return ;
	// ...

	if (p->val != q->val) flag = false, return ;
	help(p->left, q->right, flag);
	help(p->right, q->left, flag);
}


TreeNode *tmp = nullptr;

TreeNode* fun18(TreeNode *root){
	help(root);
	return tmp;
}

void help(TreeNode *root){
	if (root == nullptr) return ;
	help(root->right);
	help(root->left);

	root->left = nullptr

	root->right = tmp;
	tmp = root;
}


double(sum)/size;

6/5;
6.0/5;


	

char
printf("sum is :%c \n", sum, size);


for(int j = size-1;j>=0;j--)

for(int j = 0;j<size;j++)


while(n[0] > 0){
	int size = n[0];

	// 先输出
	for(int j = size;j>=0;j--){

	}

	int size2 = 0;
	for(int i = 0;i<size;++i){
		tmp[1][size2++] = tmp[i]->left;
		tmp[1][size2++] = tmp[i]->right;
	}

}


int n = 0;
int ans[MaxSize];


int arr[MaxSize];

void sum(int arr[], int n, int order[N][2]){

	int sum[MaxSize+1];
	sum[0] = 0;
	for(int i = 0;i<n;++i){
		sum[i+1] = 0;
		sum[i+1] = arr[i] + sum[i];
	}

	int j = 0;
	while(j<N){
		printf("%d", sum[order[j][1]+1] - sum[order[j][0]]);
	}	
}


void fun(TreeNode *root, int ans[], int n){
	if (root == nullptr) return ;
	ans[n] = root->val;
	fun(root->left, ans, n+1);
	fun(root->right, ans, n+1);
}

// 判断一个数是否是2的幂次
bool isPow2(int x){
	if (x == 1) return false;

	while(x != 1){
		if (int(x & 1) != 0) return false; 
		x = x>>1;
	}
	return true;
}


pow();
log();

x&1 == 1 // 奇数
x&1 == 0 // 偶数


int printFather(TreeNode *root, int x){

	flag = false;
	help(root, x, flag);
}

void help(TreeNode *node, int x){
	if (node == nullptr) return ;
	if (node->val == x) flag = true;
	else {
		help(node->left, x, flag);
		if (flag) {
			cout << node->val;
			return ;
		}
		help(node->right, x, flag);
		if (flag) {
			cout << node->val;
			return ;
		}

	}
}

// 二叉树重建

// 

// 先序和中序 重建二叉树 
TreeNode *buildTree(int preorder[], int inorder[], int n){
	return help(preorder, inorder, n, 0, 0, n-1);
}

// root表示 当前子树根节点在preorder的下标
// [left, right]表示以root为根的子树所有节点的中序遍历的一个区间
TreeNode *help(int preorder[], int inorder[], int n,
	int root, int left, int right){
	if (left > right) return nullptr;

	int root_val = preorder[root];
	TreeNode *rn = (TreeNode *)(malloc(sizeof(TreeNode)));
	rn->val = root_val;

	int idx = 0;
	while(idx < n){
		if (inorder[idx] == root_val) break;
	}
	
	rn->left = help(preorder, inorder, n, root+1, left, idx-1);
	rn->right = help(preorder, inorder, n, root+1+idx-left, idx+1, right);

	return rn;
}







// 图的基本方法 DFS BFS BFS最短路径
// n皇后 走迷宫 拓扑排序 并查集
// dijkstra

// 简单图 没有自环/重边
// 不考虑负权边

int d[VNUM];
// visited[]

{
	for(int i = 0;G.n;++i){
		d[i] = -1;
	}

	int q[VNUM], front = 0 ,rear = 0;

	q[rear++] = 0;
	d[0] = 0;
	
	while(rear > front){
		int t = q[front++];

		ArcNode *p = G.vexs[t].firstarc;
		while(p!=NULL){
			if (d[p->vex] == -1){
				d[p->vex] = d[t] + 1;
				q[rear++] = p->vex;
			}
		}
		
	}

	return d[n-1];
}


#define N 100
int cols[N*2], dig[N*2], rdig[N*2];
char m[N][N];

void dfs(int row, int n){
	if (row >= n) {

		for(int i = 0;i<n;++i){
			for(int j = 0;j<n;++j)
				printf("%d ", m[i][j]);
			printf("\n");
		}

		return ;
	}

	for(int col = 0;col<n;++col){
		if (cols[col] != 1 && rdig[row+col] != 1 && dig[n-col-1+row] != 1){
			cols[col] = rdig[row+col] = dig[n-col-1+row] = 1;
			m[row][col] = 'Q';
			dfs(row+1, n);
			cols[col] = rdig[row+col] = dig[n-col-1+row] = 0;
			m[row][col] = '.';
		}
	}
}


void queen(int n){
	
	for(int i = 0;i<n;++i){
		for(int j = 0;j<n;++j){
			m[i][j] = '.';
		}
	}

	dfs(0, n);
}

#define N 100
#define M 120

int d[N][M];
typedef struct {
	int first, second;
} PII;

int maze(int **matrix, int n, int m){

	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,1,-1};
	PII q[N*M], front = 0, rear = 0;

	for(int i = 0;i<n;++i){
		for(int j = 0;j<m;++j){
			d[i][j] = -1;
		}
	}
	
	d[0][0] = 0;
	PII t;
	t.first = 0, t.second = 0;
	q[rear++] = t;

	while(rear > front){
		PII tmp = q[front++];

		for(int k = 0;k<4;++k){
			int x = tmp.first + dx[k], y = tmp.second + dy[k];
			if (x>=0 && x<n && y>=0 && y<m && matrix[x][y] != 1 && d[x][y] == -1){
				d[x][y] = d[tmp.first][tmp.second] + 1;
				t.first = x, t.second = y;
				q[rear++] = t;
			}
		}
	}

	return d[n-1][m-1];
}




int visited[VNUM];
bool haveCircle(AGraph &G){

	for(int i = 0;i<G.n;++i){
		if (visited[i] == 0) {
			bool tmp = help(G, 0, -1);
			if (tmp) return true;
		}
	}
	return false;
}

bool help(AGraph &G, int v, int parent){
	visited[v] = true;

	ArcNode *p = G.vexs[v].firstarc;
	while(p != NULL){	// 遍历邻接点
		int arcv = p->vex;
		if (visited[arcv] == 1 && parent != arcv){
			return true;
		} 
		if (visited[arcv] == 0) {
			if (help(G, arcv, v)) return true;
		}
		p = p->nextarc;
	}
	return false;
}


// 无向图有没有环 修正版

int visited[VNUM];
bool haveCircle(AGraph &G){

	bool ans = false;
	for(int i = 0;i<G.n;++i){
		if (visited[i] == 0) {
			help(G, 0, -1, ans);
			if (ans) return true;
		}
	}
	return false;
}

void help(AGraph &G, int v, int parent, bool &ans){
	visited[v] = true;

	ArcNode *p = G.vexs[v].firstarc;
	while(p != NULL){
		int arcv = p->vex;
		if (visited[arcv] == 1 && parent != arcv){
			ans = true;
			return ;
		} 
		if (visited[arcv] == 0) {
			help(G, arcv, v);
		}
		p = p->nextarc;
	}
}



int q[VNUM], front = 0, rear = 0;
int indegree[VNUM];

bool topo_sort(AGraph &G){

	// 统计各个节点的入度
	for(int v = 0;v<G.n;++v){
		ArcNode *p = G.vexs[v].firstarc;
		while(p!=NULL){
			int arcv = p->vex;
			indegree[arcv]++;
			p = p->nextarc;
		}
	}

	// 入度为0的顶点入队
	for(int v = 0;v<G.n;++v){
		if (indegree[v] == 0) q[rear++] = v;
	}

	while(rear > front){
		int t = q[front++];

		ArcNode *p = G.vexs[t].firstarc;
		while(p!=NULL){
			int arcv = p->vex;
			indegree[arcv]--;

			if (indegree[arcv] == 0){
				q[rear++] = arcv;
			}
		}
	}

	if (rear == n) {
		for(int i = 0;i<rear;++i){
			printf("%d ", q[i]);
		}
		return true;
	}
	return false;
}

int f[N];

int find(int v){
	if (v != f[v]){
		f[v] = find(f[v]);
	}
	return f[v];
}


f[find(2)] = find(3);





ag->vexs[i].firstart = nullptr;
p = malloc(Node)

p->nextarc = ag->vexs[i].firstart;
ag->vexs[i].firstart = p;


// 先看图的连通分量的个数是否大于1 统计边数和点数
// 先看图的连通分量的个数是否大于1 判断有没有环


// 先看图的连通分量的个数是否大于1 统计边数和点数
int arr[2];
dfs(G, 0, arr);
for (int i = 0;i<G.vnum;++i){
	if (visited[i] == false) return false;
}

if (arr[0] == arr[1] - 1) return true;
else return false;


// i和j之间有无长度为k的简单路径
bool visited[VNUM];
bool isExistPath(AGraph G, int i, int j, int k){
	bool ans = false;
	help(G, i, j, 0, k, ans);
	return ans;
}

void help(AGraph G, int v, int j, int len, int k, bool &ans){
	visited[v] = true;
	if (len == k && v == j) {
		ans = true;
		return ;
	}
	ArcNode *p = G.vexs[v].firstarc;
	while(p!=nullptr){
		if (visited[p->vex] == false){
			help(G, p->vex, j, len+1, k, ans);
		}
	}
}


int indegree[VNUM]
int queue[VNUM], front ,rear;
// 扫描整个图，统计每个节点的入度到indegree
// 扫描indegree，如果某个点入度为0，则加入队列中
// 扫描队列，每次拿出一个节点，出队，删除从这个点出发的边（删入度）
// 删完入度之后，如果为0，也加入队列



// dijkstra
bool st[VNUM];
int dist[VNUM];
#define INF 0x3f3f3f3f

void dijkstra(MGraph &G){

	for(int i = 0;i<G.vnum;;++i)
		dist[i] = INF;
	dist[0] = 0;

	for(int i = 0;i<G.vnum;++i){
		int t = -1;
		for(int j = 0;j<G.vnum;++j){
			if (!st[j] && (t==-1||dist[t]>dist[j]))
				t = j;
		}

		st[t] = true;

		// 用t取更新dist（让t作为中转点，看能不能缩短dist）
		// 假设两个点不连通时，邻接矩阵置为INF
		for(int j = 0;j<G.vnum;++j)
			// if (!st[j] && G.edge[t][j] != INF)
				if (dist[j] > dist[t] + G.edge[t][j])
					dist[j] = dist[t] + G.edge[t][j];
				
	}
}



// kruskal
typedef struct {
	int u,v,w;
}Edge;

Edge e[ENUM];
bool st[VNUM];
int f[VNUM];

int find(int v){
	if (f[v] != v)
		f[v] = find(f[v]);
	return f[v];
}

int kruskal(AGraph &G){
	int len = 0;
	for(int i = 0;i<G.vnum;++i){
		ArcNode *p = G.vexs[i].firstarc;
		while(p){
			e[len].u = i;
			e[len].v = p->vex;
			e[len].w = p->data;
			p = p->nextart;
			len++;
		}
	}

	for(int i = 0;i<G.vnum;++i)
		f[i] = i;

	sort(e);		// 按权值从小到大排序

	int ans = 0;
	for(int i = 0;i<G.enum;++i){
		int u = e[i].u;
		int v = e[i].v;

		int fa = find(u);
		int fb = find(v);

		if (fa != fb){
			f[fa] = fb;
			ans += e[i].w;
		}
	}

	return ans;
}

// prim
typedef struct 
{
	int adjvex;
	int lowcost;
}CloseEdge;

#define INF 0x3f3f3f3f
CloseEdge e[VNUM];
bool st[VNUM];

int prim(MGraph G, int start){
	for(int i = 0;i<G.vnum;++i){
		if (i != start) 
			e[i] = {start, G.edge[start][i]};
	}
	st[start] = true;
	int ans = 0;
	for(int i = 1;i<G.vnum;++i){
		int k = Min(e);
		st[k] = true;
		ans += e[k].lowcost;
		int u0 = e[k].adjvex;
		printf("取出边:%d -> %d", k, u0);
		for(int j = 0;j<G.vnum;++j){
			if (!st[j] && e[j].lowcost > G.edge[k][j]){
				e[j] = {k, G.edge[k][j]};
			}
		}
	}
	return ans;
}


// floyd
void Floyd(MGraph G, int **d, int **path){
	for(int i = 0;i<G.vnum;++i){
		for(int j = 0;j<G.vnum;++j){
			d[i][j] = G.edge[i][j];
			path[i][j] = -1;
		}
	}

	for(int k = 0;k<G.vnum;++k){
		for(int i = 0;i<G.vnum;++i){
			for(int j = 0;j<G.vnum;++j){
				if (d[i][j] > d[i][k] + d[k][j]){
					d[i][j] = d[i][k] + d[k][j];
					path[i][j] = k;
				}
			}
		}
	}
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


n = 1234


for (int i)
  help(i) num++;

0x12FA2

['1', '2', 'F', 'A', '2']

int digit = num % 16; // digit = 11  10 A 11 B


'0' : 56
'1' : 57

'9' : 65
'$' : 

'A' : 97
'B' : 98



help():
n > 10;
int t = n%10;   // t = 4
n = n/10;     // n = 123
while(n != 0){
  int tmp = n%10; // tmp = 3 
  if (tmp >= t) return false;
  t = tmp;
}

return true;


// 元素两两逆置

LNode *p, *q, *newHead, *work, *tmp;
tmp = head;
p = work = head->next;

while(work){
  p = work;
  q = p->next;

  if (q) work = q->next;
  else {
    // q为空 奇数个节点 已经扫描到最后一个了
    tmp->next = p;
    p->next = nullptr
    break;  
  }

  // p q都不为空
  q->next = p;
  p->next = nullptr;
  tmp->next = q;
  tmp = p;
}


if (root == nullptr)
  return 0;



#define NAN -9999999

// 判断list[k]中谁最小，返回最小的那个下标
int Min(LNode **list, int k){
  int ans = NAN, idx = 0;
  for(int i = 1;i<k;++i){
    if (list[i] != nullptr){
      if (ans == NAN){
        ans = list[i]->data;
        idx = i;
      } else {
        if (ans > list[i]->data){
          ans = list[i]->data;
          idx = i;
        }
      }
    }
  }
  if (ans == NAN) return -1;
  return idx;
}

// k条链表 多路归并

// LNode *list[N];
LNode **list; // k 二位指针
LNode *head;
....
tmp = head;
while(true){
    int idx = Min(list, k);
    if (idx == -1) return head->next; 

    // 进行尾插法
    tmp->next = list[idx];
    list[idx] = list[idx]->next;
    tmp = tmp->next;
    tmp->next = nullptr;
}


void down(int t, int arr[], int len){
	int u = t;
	// 判断左孩子
	if (u*2+1 < len && arr[u*2+1] > arr[u]) t = u*2+1;
	// 判断右孩子
	if (u*2+2 < len && arr[u*2+2] > arr[t]) t = u*2+2;
	if (u != t){
		swap(arr[u], arr[t]);
		down(t, arr, len);
	}
}

// idx 左孩子 idx*2+1 右孩子 idx*2+2
void heap_sort(int arr[], int len){
	
	// 创建堆
	for(int i=len/2-1;i>=0;i--)
		down(i, arr, len);

	for(int i=len-1;i>0;i--){
        swap(arr[0], arr[i]);
        down(0, arr, i);
    }
}

// 哈希表
// 线性探测法
// idx = hashFun(key); i = 1:N;

typedef struct{
  int key;
  int data;
  // OtherInfo info;
}HashTable;

#define N 1000
HashTable HT[N];

#define NULLKEY 0

int hashFun(int key){
  return key % N;
}

int insert(HashTable *HT, int key, int data){
  int h0 = hashFun(key);
  if (HT[h0].key == NULLKEY || HT[h0].key == key) {
    HT[h0].key = key;
    HT[h0].data = data;
    return 1;
  } else {
    // 对于key的值，可能发生了线性探测
    for (int i = 1;i<N;++i){
      int hi = (h0+i)%N;
      if (HT[hi].key == NULLKEY || HT[h0].key == key){
        HT[h0].key = key;
        HT[h0].data = data;
        return 1;
      }
    }
    return -1;
  }
}

// search 搜索

// delete 删除
#define DELETE -1
int deleteHash(HashTable *HT, int key){
  int h0 = hashFun(key);
  if (HT[h0].key == NULLKEY || HT[h0].key == DELETE) return 0;
  else if (HT[h0].key == key) {
    HT[h0].key = DELETE;
    return 1;
  } else {
    for(int i = 1;i<N;++i){
      int hi = (h0+i)%N;
      if (HT[hi].key == key) {
        HT[hi].key = DELETE;
        return 1;
      } else if (HT[hi].key == NULLKEY) {
        return 0;
      }
    }
    return -1;
  }
}

typedef struct {
  int key, data;
  struct ListNode *next;
} ListNode;

#define N 100
typedef struct {
  ListNode *bucket[N];
} HashTable;

void insert(HashTable &ht, int key, int data){
  int h0 = hashFun(key);
  ListNode *p = ht.bucket[h0];

  while(p){
    // 更新data
    if (p->key == key){
      p->data = data;
      return ;
    }
    p = p->next;
  }

  // 插入
  p = new ListNode;
  p->data = data;
  p->key = key;
  p->next = nullptr;

  if (ht.bucket[h0])
    p->next = ht.bucket[h0];
  ht.bucket[h0] = p;
}

// 删除


// 查找


HeadInert(LNode *head, LNode *h);


#define MaxSize 500
int set[MaxSize];
// 双指针/滑动窗口
int MaxSubStr(char str[], int n){
    int i = 0, j = 0, ans = 0;
    while(i < n && j < n){
        if (set[str[j]] == 0) {
            set[str[j]] = 1;
            j++;
        } else {
            // 此时str[j]和[i, j)之间的字符重复了
            ans = max(ans, j-i);
            while(str[i] != str[j]) i++;
            // str[i] == str[j]
            i++;
            set[str[j]] = 0;
        }
    }
    return ans;
}

// 二叉树直径 最长路径
int ans = 0;
void MaxPath(TreeNode *root){
    if (root == nullptr) return 0;
    int l = depth(root->left);
    int r = depth(root->right);
    ans = max(ans, l+r);

    MaxPath(root->left);
    MaxPath(root->right);
}

int depth(TreeNode *root){
    if (root == nullptr) return 0;
    int l = depth(root->left);
    int r = depth(root->right);
    return max(l, r) + 1;
}


int MaxPath(TreeNode *root){
    if (root == nullptr) return 0;
    int l = MaxPath(root->left);
    int r = MaxPath(root->right);

    ans = max(ans, l + r);

    return max(l, r) + 1;
}

// 最长路径 值都相同
int MaxPath(TreeNode *root){
    if (root == nullptr) return 0;
    int l = MaxPath(root->left);
    int r = MaxPath(root->right);  

    int tmp = 0;
    if (root->left != nullptr && root->left->data == root->data) tmp += l;
    if (root->right != nullptr && root->right->data == root->data) tmp += r;  
    ans = max(ans, tmp);

    return max(l, r) + 1;
}


typedef 

int find(int **A, int m, int n);
#define M 100
#define N 100
int A[M][N];

A[2]
A[4]
void fun(int A[]);

A[2][3]
A[3][4]

A[M][N]
void fun1(int A[][N]);

int i = 0;
for(;i<m;i++)

int *A;
A[0] A[1];
int A[MaxLen];

// vector<int> res; // 可变长数组
// // 当你res数组长度不够用的时候，他会自动扩容
// res.push_back(1);

#define MaxLen 100000
int num[MaxLen];

typedef struct {
    int arr[MaxLen];
    int top;
    int max[MaxLen];
} Stack;

stack[]: 2 3
max[]:   2 3

int push(Stack s, int x);
int pop(Stack s);
int top(Stack s);
int Max(Stack s);

// 设计数据结构题目
// 用两个栈实现一个队列
// 用两个队列实现一个栈

// 设计一个图，能够记录图中节点的最大值/平均值




void dfs(){

    visited[i] = true;
    s[len++] = i;   // 放入路径中

    if (i == j) {
        printStr();
        visited[i] = false;
        return ;
    }

    while(p){
        if (!visited[p->adjvex]) {
            dfs(p->adjvex);
            visited[p->adjvex] = false;
        }
    }

}


void topo_sort(){
    int q[MaxSize], rear = 0, front = 0;

    for (int i = 0;i<n;++i) if (indegree[i] == 0) q[rear++] = i;

    while(rear > front) {
        int t = q[front++];

        while(p){
            int j = p->adjvex;
            indegree[j]--;
            if (indegree[j] == 0) q[rear++] = j;
        }
    }

    if (rear >= n) return true;
    else return false;
}


// 链表归并

// 链表 快速排序

void quick_sort_node_list(LNode *h) {

}


void help(LNode * &head) {
    if (head == nullptr) return ;

    // 确定枢纽元素
    int privot = head->val;
    LNode *privot_node = head;

    // 划分
    LNode *left = nullptr, *right = nullptr, *work = head, *p;
    while(work) {
        p = work->next;
        if (work->val <= privot && work != privot_node) {
            // 划分到左侧
            work->next = left;
            left = work;
        } else if (work->val > privot && work != privot_node) {
            work->next = right;
            right = work;
        } else {
            // 跳过privot_node
        }
        work = p;
    } 

    // 递归去排序
    help(left);
    help(right);

    // 尾插法 合并两个链表和一个节点
    LNode tmp;
    LNode *newHead = &tmp, *tail = &tmp;
    newHead->next = nullptr;

    tail->next = left;
    while(tail->next) tail = tail->next;

    tail->next = privot_node;
    tail = tail->next;
    tail->next = nullptr;

    tail->next = right;
    while(tail->next) tail = tail->next;

    head = newHead->next;
}


// 抽扑克牌 Red/Black Joker -> M N
#define MaxSize 10
struct Poker{
    char str[MaxSize];
    int size;
}

int set[13];
bool isConsistent(Poker p[5]){
    int joker = 0;

    // 散列函数
    for(int i = 0;i<5;++i){
        if (p[i].size == 1) {
            if (p[i].str[0] <= '9' && p[i].str[0] >= '2') set[p[i].str[0] - '1']++;
            else if (p[i].str[0] == 'A') set[0]++;
            else if (p[i].str[0] == 'J') set[10]++;
            else if (p[i].str[0] == 'Q') set[11]++;
            else if (p[i].str[0] == 'K') set[12]++;
        } else {
            if (p[i].str[0] == '1') set[9]++;
            else joker++;
        }
    }

    // 1 2 3 4
    // 1 3 4 5
    int idx = 0, cnt = 0;
    while(idx < 13 && set[idx] == 0) idx++;
    while(idx < 13) {
        if (set[idx] > 1) return false;
        if (set[idx] == 0) {
            if (joker > 0) {
                joker--;
                cnt++;
            } else
                break;
        } else {
            cnt++;
        }
        idx++;
    }
    if (cnt + joker == 5) return true;
    else return false;
}


// 将邻接矩阵转化为邻接表
MGraph graph;
struct MGraph{
    int A[N][N];
    int arcnum;
    int vexnum;
}


bool isSubTree(TreeNode *T1, TreeNode *T2){
    if (T1 == nullptr) return true;
    if (T2 == nullptr) return false;
    if (compare(T1, T2)) return true;
    return isSubTree(T1, T2->left) || isSubTree(T1, T2->right);
}

int MaxSize = 0;
int len(TreeNode *root) {
    if (root == nullptr) return 0;
    MaxSize = max(MaxSize, depth(root->left) + depth(root->right));
    len(root->left);
    len(root->right);
    return MaxSize;
}

TreeNode *, int code;
typedef struct {
    TreeNode *root;
    int code;
} Pair;

Pair q[MaxSize];

q[i].root;

int left = q[front].code;
int right = 0;
size = rear - front;
for(int i = 0;i<){
    Pair tmp = q[i];

    if (i == size-1) {
        right = q[i].code;
    }

    if (tmp.root->left) {
        q[rear].root = tmp.root->left;
        q[rear].code = tmp.code * 2;
        rear++;
    }
}

Max = max(Max, right-left+1);


DFS(i, j, G, k-1);

typedef struct {
    int data;
    int next;
} StaticNode;

// next==-2 表示空置节点 next==-1表示尾节点
bool insertElem(StaticNode * list, int &headIdx, int idx, int data){
    if (idx == 0) {
        for(int i = 0;i<N;++i){
            if (list[i].next == -2) {
                list[i].data = data;
                list[i].next = headIdx;
                headIdx = i;
                return true;
            }
        }
        return false;
    }
    else {
        // idx>=1
        int tmpIdx = headIdx;
        while(idx > 1) {
            tmpIdx = list[tmpIdx].next;
        }
        for(int i = 0;i<N;++i){
            if (list[i].next == -2) {
                list[i].data = data;
                list[i].next = list[tmpIdx].next;
                list[tmpIdx].next = i;
                return true;
            }
            return false;
        }
    }

}

typedef struct {
    int data;
    int next;
} Node;

typedef struct{
    Node nl[N];
    int headIdx;
    int len;
} StaticList;

void rightMove(StaticList &L, int m){
    m = m%len;
    while(m > 0) {
        help(L);
        m--;
    }
}

void help(StaticList &L){
    int lastData = 0;
    int tmp = L.len-2;
    int idx = L.headIdx;
    while(tmp > 0) {
        idx = L.nl[idx].next;
    }

    int lastIdx = L.nl[idx].next;
    lastData = L.nl[lastIdx].data;
    L.nl[lastIdx].next = -2;
    L.nl[idx].next = -1;

    for(int i = 0;i<N;++i){
        if (L.nl[i].next == -2) {
            L.nl[i].data = lastData;
            L.nl[i].next = L.headIdx;
            L.headIdx = i;
        }
    }
}


// 树 完全二叉树/满二叉树
int tree[MaxSize];
tree[0];    // 根
tree[1];    // 根的左孩子（如果有）

// 数组存储普通二叉树
int tree[MaxSize];
int size;
void InOrder(int idx){
    if (tree[idx] == -1) return ;
    InOrder(idx*2+1);
    printf("%d", tree[idx]);
    InOrder(idx*2+2);
}

if (p->next != nullptr) {

} else {
    // 要删最后一个
    int tmp = len-2;
    while(tmp) {

    }
}

str = "abcde"

char ans[5];
int idx = 0;
ans[idx++] = ch;


for(int i = 0;i<5;i++){
    if (used[i] == false){
        used[i] = true;
        // 递归
        used[i] = false;
    }
}

