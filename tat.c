#include <stdio.h>

int third_largest(int* a){
	int size = sizeof(a)/sizeof(a[0]);
	int first = a[0];
	int second = INT_MIN;
	int third = INT_MIN;
	for(int i=1;i<size;i++){
		if(a[i]>first) first = a[i];
		
		if(a[i]>second && a[i]!=first) second = a[i];

		if(a[i]>third && a[i]!=second && a[i]!=first) third = a[i];
	}
	return third;
}
int second_minimum(int* a){
	int size = sizeof(a)/sizeof(a[0]);
	int first = a[0];
	int second = INT_MAX;
	for(int i=1;i<size;i++){
		if(first>a[i]) first = a[i];

		if(second>a[i] && a[i]!=first) second = a[i];
	}
	return second;
}

int main(){
	int a[50];
	for(int i=0;i<50;i++){
		scanf("%d"&a[i]);
	}
	printf("%d\n",third_largest(a));
	printf("%d\n",second_minimum(a));

	return 0;
}

#include<stdio.h>

int finding(int* a,int size,int total){
	int count = 0;
	for(i=0;i<size;i++){
		if(total - a[i]>0){
			count++;
			total = total - a[i];
		}
	}
	return count;
}

int main(){
	int types =0;
	int a[50];
	int total = 0;
	scanf("%d",&types);
	for(int i=0;i<types;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",total);
	printf("%d",finding(a,types,total));
	return 0;
}

#include <stdio.h>

bool palindrome(int num){
	int n = num;
	int sum = 0;
	while(n){
		sum = (sum *10) + (num % 10);
		num /=10;
	}
	return (sum == num);
}

char* binary_to(int num){
	char* binary = (char*)malloc(sizeof(char) * len);
    int k = 0;
    for (unsigned i = (1 << len - 1); i > 0; i = i / 2) {
        binary[k++] = (n & i) ? '1' : '0';
    }
    binary[k] = '\0';
    return binary;
}

int main(){
	int num = 0;
	scanf("%d",&num);
	if(palindrome(num)){
		printf("palindrome");
	}
	else printf("Not palindrome");
	printf("%s",binary_to(num));
	return 0;
}