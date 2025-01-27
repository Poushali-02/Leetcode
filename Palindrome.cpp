bool isPalindrome(int x) {
    int num=x, nw=0, r;
    while(x>0){
        r = x%10;
        nw = nw*10.0 + r;
        x/=10;
    } if(num==nw) return true;
    else return false;
}
