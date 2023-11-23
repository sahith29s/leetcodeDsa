string mergeAlternately(string word1, string word2)
{
    bool word1True = true;
    string ans = "";
    int first = 0;
    int second = 0;
    while (word1[first] && word2[second])
    {
        if (word1True)
        {
            cout << word1[first] << endl;
            ans = ans + word1[first++];
            word1True = !word1True;
        }
        else
        {
            ans = ans + word2[second++];
            word1True = !word1True;
        }
    }
    while (word2[second])
    {
        ans = ans + word2[second++];
    }
    while(word1[first]){
        ans = ans + word1[first++];
    }
    return ans;
}
