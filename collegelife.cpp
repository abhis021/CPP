#include<iostream>
// #include<bits/stdc++.h>

using namespace std;

long long int res(long long n, long long e, long long , A, long long B, long long C);
long long int minv(long long a, long long b);
long long int maxv(long long a, long long b);


int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long int n, e, h;

    // n a number of orders
    //e number of eggs
    //h number of chocolate bars
    long long int A, B, C;
    //A= PRICE OF OMELETTE
    //B = PRICE OF MILK SHAKE
    //C = PRICE OF CHOCOLATE CAKE
    cin>>n>>e>>h>>A>>B>>C;

    long long int ans;
    ans = res(n, e, h, A, B, C);

    if(ans ==1e15)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;

    }

    return 0;
}

long long int res(long long n, long long e, long long h, long long A, long long B, long long C){
    if(n<=0){
        //when there are no orders
        return 0;
    }

    //initialising answer to max value
    long long int ans =1e15;

    if ((n<=e)&&(n<=h))
    {
        /*condition for all the orders are chocolate cakes one cake requirs one egg and one bar
        so n cakes requires at least n eggs and n bars*/

        ans = minv(ans, n*C);
        //cost of n acakes will be n*C, where c is cost of one cake

    }
    if(3*n<=h){
        //condition for all the orders are milkshakesone shake requires 3 bars so n orders requires 3*n bars

        ans = minv(ans, n* B);
        //cost of n milkshakes will be n *B
    }

if(2*n<=e){
    //conditions for all the orders are omlettes, each omlette requires 2 eggs, n omlettes requires n*2 eggs
    ans = minv(ans, n*A);
    //cost of one omlette is A, n omlettes = n*A
}

if (((h-n)/2>=1)&&((h-n)/2>=n-e))
{
    /* condition for milkshake and chocolate cakes only. let milkshakes be x, and chocolate cakes be n -x
     where total orders =n. each milkshake requires 3 bars and each cake requires 1egg and 1 bar, so total
     eggs required = n-x, so n-x <=e.
     total bars requires = 3*x +n -x which should be less
     than or equal to h
     so 3x + n -x <= h=> x<=(h-n)/2

    x should be at least 1, (h-n)/2 should be greater than or
    equal to 1
    
    pice = x*B +(n-x) *C
    = x*(B-C) + n*C
    if(B-C less than zero price will decrease with increase in x)
    if(B-C is greater than zero price will decrease with decrease in x)

    
     */
    if(B-C<0){
        long long int temp = minv(n-1, (h-n)/2);
        //temp will be the maximum value that x can take
        ans = minv(ans, (B-C)*temp +n*C);
    }
    else{
        long long int temp = maxv(1, n-e);
        //temp is the minimum value that x can take

        ans = minv(ans, (B-C)*temp+n*C);

    }

}
    if(e-n>=1&& e-n >=n-h){
        //condition for only omlette and chocolate cakes
        // let there be x number of omlette and n-x number of chocolate cakes where total numberof
        //orders = n;
        /*One omlette requires 2 eggs, one cake requires 1 egg and 1 chocolate bar
        so total eggs requires = 2*x+(n-x) which shouldbe <=e=>x<=(e-n)
        total bars requires = n-x which should less than  h =>x>=n-h
        x should be in the range of 1 to n-1  therefore e-n >=1 and e -n >= n-h */
        
        //price=(x*A+(n-x)*C) => (A-C)*x + n*C
        //if(A-C)<0 price will decrease with increase in x
        //if(A-C)>0 price will decrease with decrease in x

        if(A-C<0){
            long long temp = minv(n-1, e-n);
            //temp will be the maximum value that x can attain
            ans= minv(ans, (A-C)*temp + n*C);
        }
        else{
            long long temp = maxv(1, n-h);
            ans = minv(ans, (A-C)*temp + n*C);

        }
    }
if ((e/2>=1)&& (e/2>=(3*n-h + 2)/3)){
    //derived similar to the above cases
    if(A-B <0){
        long long int temp = minv(n-1, e/2);
        ans = minv(ans, (A-B)*temp +n*B );

    }
    else{
        long long int temp = maxv(1, (3*n-h+2)/3);
        ans = minv(ans, (A-B)*temp +n*B);
    }
}


//condition where every type is ordered
if((e>=3) && (h >= 4) && (n>=3)){
    //A+B+C= sum of three orders
    //toral used items for 3 orders = 3 eggs, 4 bars, 
    ans = minv(ans, A+B+C+res(n-3, e-3, h-4, A, B, C) );

}

return ans;


}

long long int minv(long long int a,long long int b){
    if(a<b)
        return a;
    return b;
}

long long int maxv(long long int a , long long int b){
    if(a>b)
        return a;
    return b;

}