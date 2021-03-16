// #include <iostream>
// #include <vector>
// #include<string>
// #include<string.h>
// #include<sstream>
#include <bits/stdc++.h>

using namespace std;

// Function to return the maximum profit
// that can be made after buying and
// selling the given stocks
int maxProfit(int price[], int start, int end)
{
 
    // If the stocks can't be bought
    if (end <= start)
        return 0;
 
    // Initialise the profit
    int profit = 0;
 
    // The day at which the stock
    // must be bought
    for (int i = start; i < end; i++) {
 
        // The day at which the
        // stock must be sold
        for (int j = i + 1; j <= end; j++) {
 
            // If byuing the stock at ith day and
            // selling it at jth day is profitable
            if (price[j] > price[i]) {
 
                // Update the current profit
                int curr_profit = price[j] - price[i]
                                  + maxProfit(price, start, i - 1)
                                  + maxProfit(price, j + 1, end);
 
                // Update the maximum profit so far
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}
 
// Driver code
int main()
{
    int price[] = { 100, 180, 260, 310,
                    40, 535, 695 };
    int n = sizeof(price) / sizeof(price[0]);
 
    cout << maxProfit(price, 0, n - 1);
 
    return 0;
}

// int main() {
 
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

//     //  vector<int> a = {1,5,8,3,3,7,8,8,9};
//     //  cout << a[1];
//     //  int n = a.size();
     
//     // for (int i =0; i < n; i++) {
//     //     int z;

//     //     z++;
//     //     cout << "ZZZ" << z << "\n";
//     //     if (a[i]==8) {a.erase(a.begin()+i);}
//     // }
//     // for (int i =0; i < a.size(); i++) {
//     //     cout << a[i] << ' ';
//     // }
//     return 0;
// }

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int n;
//     cin >> n;
//     int a[] = {1,5,3,3,7,8,9};
//     sort (a,a+7,greater<int>());
//     for (int i =0; i < n; i++) {
//         cout << a[i] << ' ';
//     }
//     return 0;
// }


// void func(int x, int y) {
//     cout << "some thing";
// }

// class Animal
// {
//     private:
//     int i;
//     public:
//     //virtual
//     virtual string say()
//     {
//         return "parrent class : some thing \n";
//     }
//     void func(int x, int y) {
//     cout << "some thing";
// }

// };
// class dog : public Animal
// {
//     public:
    
//     string say() 
//     {
//         return "dog : gau gau\n";
//     }
// };
// class cat : public Animal
// {
//     public:
//     string say()
//     {
//         return "cat : meo meo\n";
//     }
// };
// int main()
// {
//     func(1,2);
//     Animal A;
//     A.func(1,2);
// }
// int main()
// {
//     string str = "569,123.456.ff.ggggggggg";
//     cout << str[1] << str [7];

// }
// void sortArray(int *a,int n){
//     for (int i = 0;i<n-1;i++)
//     {
//         for (int j = i+1;j<n;j++)
//         {
//             if(a[i]>a[j]) {
//                 a[i] = a[i] + a[j];
//                 a[j] = a[i] - a[j];
//                 a[i] = a[i] - a[j];
//             }
//         }
//     }
//     for (int i = 0;i<n;i++) {
//         cout << a[i] << " ";
//     }
// }
// void sort(int *a,int n){
//     cout << "\n Sort segment ##########" << endl;
//     int lap = a[0];
//     vector <int> b;
//     b.push_back(a[0]); 
//     for (int i =1; i<n; i++) {
//         if (a[i] != lap) {
//             b.push_back(a[i]);
//             lap = a[i];
//         }
//     }
//     for (int i =0;i<b.size();i++)
//     {
//         cout << b[i] << " ";
//     }
//     cout << "\n b.size()" << b.size();
// }
// int main(){
//     int a[]={6,77,5,5,5,6,2,2,9,99,9,99,9,0,0};
//     int n = sizeof(a)/sizeof(a[0]);
//     sortArray(a,n);
//     sort(a,n);
// }
// int main() {

//    insertFirst(1,10);
//    insertFirst(2,20);
//    insertFirst(3,30);
//    insertFirst(4,1);
//    insertFirst(5,40);
//    insertFirst(6,56); 

//    printf("Danh sach ban dau: "); 
	
//    //in danh sach
//    printList();

//    while(!isEmpty()){            
//       struct node *temp = deleteFirst();
//       printf("\nGia tri bi xoa:");  
//       printf("(%d,%d) ",temp->key,temp->data);        
//    }  
	
//    printf("\nDanh sach sau khi da xoa gia tri: ");          
//    printList();
//    insertFirst(1,10);
//    insertFirst(2,20);
//    insertFirst(3,30);
//    insertFirst(4,1);
//    insertFirst(5,40);
//    insertFirst(6,56); 
//    printf("\nPhuc hoi danh sach: ");  
//    printList();
//    printf("\n");  

//    struct node *foundLink = find(4);
	
//    if(foundLink != NULL){
//       printf("Tim thay phan tu: ");  
//       printf("(%d,%d) ",foundLink->key,foundLink->data);  
//       printf("\n");  
//    }else {
//       printf("Khong tim thay phan tu.");  
//    }

//    deleteKey(4);
//    printf("Danh sach, sau khi xoa mot phan tu: ");  
//    printList();
//    printf("\n");
//    foundLink = find(4);
	
//    if(foundLink != NULL){
//       printf("Tim thay phan tu: ");  
//       printf("(%d,%d) ",foundLink->key,foundLink->data);  
//       printf("\n");  
//    }else {
//       printf("Khong tim thay phan tu.");  
//    }
	
//    printf("\n");  
//    sort();
	
//    printf("Danh sach sau khi duoc sap xep: ");  
//    printList();
	
//    reverse(&head);
//    printf("\nDanh sach sau khi bi dao nguoc: ");  
//    printList();
// }
//create note and pointer to next node

// int main() {
//     int a[10000*10000000];
//     vector<int> array;
//     array.push_back(1);
//     array.push_back(4);
//     cout << array[array.size()-1];
    
// }
// int main() {
//     //int *p = nullptr;

//     //cout << *p;

//     //cout << "hello";
//     int i =5;
//     i++;
//     int a[i];
//     i = i + 4;
//     int b[i];
//     cout << "ss";

// }

// int main()
// {
//     int i;
//     cin >> i;
//     int j =11;


//     int* p1 = &i;
//     int** p2 = &p1;
//         cout << "p1:" << *p1;
//         cout << "p1:" << **p2;
//         cout << "###" << sizeof(p1);
// }
