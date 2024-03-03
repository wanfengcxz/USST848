semaphore mutex = 1;
semaphore empty = 500;

// i表示参观者的标号
visitor(int i){

	P(empty);
	P(mutex);
	进门;
	V(mutex);

	参观;

	P(mutex);
	出门;
	V(mutex);
	V(empty);

}

Producer(){
	P(empty);
	P(mutex);
	进门;
	V(mutex);
	V(full);
}

Comsumer(){
	P(full);
	P(mutex);
	出门;
	V(mutex);
	V(empty);
}


semaphore mutex = 6;
semaphore empty = 500;
semaphore full = 0;

enter(int i){
	P(empty);
	P(mutex);
	进门;
	V(mutex);
	V(full);
}

leave(int i){
	P(full);
	P(mutex);
	出门;
	V(mutex);
	V(empty);
}


semaphore d1=1,d2=1,d3=1,d4=1,d5=1,d6=1;
semaphore empty = 500;

enter(int j){
	P(empty);
	选择第i扇门;
	P(di);
	进门;
	V(di);
}

leave(int j){
	选择第i扇门;
	P(di);
	出门;
	V(di);
	V(empty);
}

semaphore d[6] = {1,1,1,1,1,1};
semaphore empty = 500;

enter(int j){
	P(empty);
	int i = random()%6;
	P(d[i]);
	进门;
	V(d[i]);
}

semaphore d[6] = {1,1,1,1,1,1};
semaphore empty = 500;
semaphore full = 0;

// 记录一下每个人进门所选择的门的编号
int choice[1000000];

enter(int j){
	P(empty);
	选择第i扇门;
	// self.door = i;
	choice[j] = i;
	P(d[i]);
	进门;
	V(d[i]);
	V(full);
}

leave(int j){
	P(full);
	int i = choice[j];
	P(d[i]);
	出门;
	V(d[i]);
	V(empty);
}


semaphore b1_empty=1, b1_full=0;
semaphore b2_empty=1, b2_full=0;


R(){
	int x = read();
	if (x%2 == 0){
		P(b2_empty);
		put;
		V(b2_full);
	} else {
		P(b1_empty);
		put;
		V(b1_full);
	}
}

W1(){
	P(b1_full);
	print;
	V(b1_empty);
}

W2(){
	P(b2_full);
	print;
	V(b2_empty);
}


semaphore A = m;
semaphore B = n;
semaphore mutex=1;
semaphore full=0;

PA(){
	P(A);
	produce an A;
	V(B);
	P(mutex);
	put;
	V(mutex);
	V(full);
}

PC(){
	P(full);
	P(mutex);
	get an A or B;
	V(mutex);
	sell;
}

PB(){


}

