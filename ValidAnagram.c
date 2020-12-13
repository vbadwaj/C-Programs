bool isAnagram(char* s, char* t) {
    int count[26] = {0};
    char c;
    while ((c=*s++)!='\0')
        count[c-'a']++;
    while ((c=*t++)!='\0')
        count[c-'a']--;
    for (int i=0; i<26 ;++i)
        if (count[i]!=0)
            return false;
    return true;
}