int convert (char input){
    if(input=='I')return 1;
    else if (input=='V')return 5;
    else if(input=='X')return 10;
    else if(input=='L')return 50;
    else if(input=='C')return 100;
    else if(input=='D')return 500;
    else if(input=='M')return 1000;
    else return 0;
}

int romanToInt(char * s){
  
    int sum=0;
    for(int i=0;s[i]!='\0';i++){
        if(convert(s[i])<convert(s[i+1])){
            sum=sum-convert(s[i]);
        }
        else{
            sum+=convert(s[i]);
        }
        
    }
    return sum;
    

}
