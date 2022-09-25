int i,count=0;
    vector<int>c;
    for(i=0;i<dictionary.size();i++)
    {
    
        int n1 = dictionary[i].length(); 
        int n2 = query[i].length(); 
        int count=0;
        if (n1 != n2) 
            break;
        sort(dictionary.begin(), dictionary.end()); 
        sort(query.begin(), query.end()); 
        for (int i = 0; i < n1; i++) 
         if (dictionary[i] != query[i]) 
            break; 
        count++;
        c.push_back(count);
        cout<<count;
    }
    for(i=0;i<c.size();i++)
    cout<<c.at(i);
    return(c);
}
