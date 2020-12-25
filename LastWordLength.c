
int lengthOfLastWord(char* s) {
    int i,count=0;
    for(i=strlen(s)-1;i>=0;i--)
    {
    	if(s[i]==' ' && count!=0)
    	    break;
    	if(s[i]!=' ' || count!=0)
    	    count++;
    }
    return count;
}
