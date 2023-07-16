#include<stdio.h>
#include<stdlib.h>
int superSet[20],superSetSize=0, 
setA[20],setASize=0, 
setB[20],setBSize=0,
bitStringA[20],bitStringB[20],bitStringUnion[20],bitStringIntersection[20],bitSt 
ringDifference[2
0];
int isBitStringReady=0;
//method declarations
void getSet(int arr[],int setSize); 
void processChoice(int choice); 
void printAllSets();
void printSet(int arr[],int size); 
void generateAndPrintBitStrings();
void generateBitString(int arr[],int size,int bitStringArray[]); 
int search(int arr[],int arrSize,int elem);
int checkBitStringStatus();
void setUnion(int arr1[],int arr2[]);
void setIntersection(int arr1[],int arr2[]);
void setDifference(int arr1[],int arr2[]);
void printSetOperationResult(int arr[]);
void printBitStringAsSet(int arr[]);
int checkBitStringStatus();
int main(){
int choice=0;
system("cls");
do{
printf("\n============================\n");
printf("1.Enter Universal Set\n");
printf("2.Enter Set A\n");
printf("3.Enter Set B\n");
printf("4.Generate Bit Strings\n");
printf("5.Union\n");
printf("6.Intersection\n");
printf("7.Difference\n");
printf("8.Print Sets\n");
printf("9.Exit\n");
printf("============================\n");
printf("Enter Choice:");
scanf("%d",&choice);
printf("============================\n");
processChoice(choice);
}while(choice!=9);
return 0;
}
void processChoice(int choice){
switch(choic
e){ 
case 1: printf("
E
n
t
e
r Sup
er Set Size
:
"); 
sca
nf(
"
%
d
"
,
&sup
erS
e
t
S
ize); 
g
etS
et(su
p
erS
et,sup
erS
etSize); 
br
e
ak;
case 2: printf("
E
n
t
er Set A Size
:
"); 
sca
nf(
"
%
d
"
,
&
s
etASize); 
g
etS
e
t
(
s
etA,s
etASize); 
br
e
ak;
case 2: printf("
E
n
t
er Set A Size
:
"); 
sca
nf(
"
%
d
"
,
&
s
etASize); 
g
etS
e
t
(
s
etA,s
etASize); 
br
e
ak;
case 3: printf("
E
n
t
er Set B Size:"); 
sca
nf(
"
%
d
"
,
&
s
e
t
BSize); 
g
etS
e
t
(
s
e
t
B,s
e
t
BSize); 
br
e
ak;
case 4: printf("G
e
n
e
r
ati
n
g bit str
i
n
g
s
\n"); 
g
e
ner
at
eAndPrint
BitStri
n
g
s
(); 
br
e
ak;
case 5: printf("
S
et un
i
o
n
\n
"); 
if(c
hec
k
BitStrin
gStatus()==1)
{
setUnion(bitStringA,bitStringB);
printSetOperationResult(bitStringUnion);
}
break;
case 6:
printf("Set Intersection\n");
if(checkBitStringStatus()==1)
{
setIntersection(bitStringA,bitStringB);
printSetOperationResult(bitStringIntersection);
}
break;
case 7:
printf("Set Difference\n");
if(checkBitStringStatus()==1)
{
setDifference(bitStringA,bitStringB);
printSetOperationResult(bitStringDifference);
}
break;
case 8:
printAllSets();
break;
}
}
void printSetOperationResult(int arr[]){
printf("\nUnion Operation (bit string):");
printSet(arr,superSetSize);
printf("\nOperation Result:");
printBitStringAsSet(arr);
}
void printBitStringAsSet(int arr[]){
int isFirstOutputDoneFlag=0;
int i=0;
printf("{");
for( i=0;i<superSetSize;i++){
if(arr[i]==1){
if(i!=0 && isFirstOutputDoneFlag==1){
printf(",");
}
printf("%d",superSet[i]);
isFirstOutputDoneFlag=1;
}
printf("}");
}
void setUnion(int arr1[],int arr2[]){
int i;
for(i=0;i<superSetSize;i++){
bitStringUnion[i]=arr1[i]|arr2[i];
}
}
void setIntersection(int arr1[],int arr2[]){
int i;
for(i=0;i<superSetSize;i++){
bitStringIntersection[i]=arr1[i]&arr2[i];
}
}
void setDifference(int arr1[],int arr2[]){
int i;
for(i=0;i<superSetSize;i++){
printf("%d",!arr2[i]) ;
bitStringDifference[i]=arr1[i]&(!arr2[i]);
}
}
int checkBitStringStatus(){
if(isBitStringReady==0){
printf("\n Generate Bit String first!");
return 0;
}
return 1;
}
void getSet(int arr[],int setSize){
int i;
printf("\nEnter set\n");
for(i=0;i<setSize;i++){
scanf("%d",&arr[i]);
}
}
void printAllSets(){
printf("\nSuper Set:");
printSet(superSet,superSetSize);
printf("Set A:");
printSet(setA,setASize);
printf("Set B:");
printSet(setB,setBSize);
}
void printSet(int arr[],int size){
int i;
printf("{");
for(i=0;i<size;i++){
printf("%d",arr[i]);
if(i!=size-1){
printf(",");
}
}
printf("}\n");
}
void generateAndPrintBitStrings(){
int i;
for(i=0;i<superSetSize;i++){
bitStringA[i]=0;
bitStringB[i]=0;
bitStringUnion[i]=0;
bitStringIntersection[i]=0;
bitStringDifference[i]=0;
}
//generate setA bitString
generateBitString(setA,setASize,bitStringA);
//generate setB bitString
generateBitString(setB,setBSize,bitStringB);
//print the bit strings
printf("\nSet A Bit String representation : ");
printSet(bitStringA,superSetSize);
printf("\nSet B Bit String representation : ");
printSet(bitStringB,superSetSize);
isBitStringReady=1;
}
void generateBitString(int arr[],int size,int bitStringArray[]){
int i;
for(i=0;i<size;i++){
int pos=search(superSet,superSetSize,arr[i]);
if(pos>=0){
bitStringArray[pos]=1;
}
}
}
int search(int arr[],int arrSize,int elem){
int i;
for(i=0;i<arrSize;i++){
if(arr[i]==elem)
return i;
}
return -1;
}