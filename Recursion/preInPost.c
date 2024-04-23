#include<stdio.h>
void preInPost(int n){
    if (n==0) return;
    printf("Pre %d\n", n);// is ,mein kya ho rha ki jaise hum n = 2 lia so phir, pehla case run hoga printf("pre %d\n", n) wala case jismein 2 print ho jayega
    preInPost(n-1);         // phir uske baad n-1 hoga joki 1 ban jayega phir preinPost fuction call hoga 1 value ke sath so phir printf("pre %d\n", n) print hoga ye 
    printf("In %d\n", n);   // phir n-1 joki 0 ho jayega jisse functio return kardega inshort function khatm ho jayega.... simple ye repeater karta rhaega jab tak sare conditons satisfy na ho jaye.
    preInPost(n-1);
    printf("Post %d\n", n);
    return;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    preInPost(n);
    return 0;
}