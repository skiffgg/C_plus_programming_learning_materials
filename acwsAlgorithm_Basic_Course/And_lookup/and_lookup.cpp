#include<iostream>
#include<vector>

using namespace std;

template<typename T>
class UnionFind
{
private:
    vector<T> parent;
    vector<T> m_element;

public:
    void Iniate(vector<T> element)
    {
        for(int i=0;i<parent.size();i++)
        {
            vector[i]=element[i];
        }
    }

    // 路径压缩
    T find(T x) 
    {
        if (parent[x] != x) 
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    //合并两个集合
    void add(T x,T y)
    {
	    x=find(x);
	    y=find(y);
	    if(x!=y)
	    {
		    fa[x]=y;
	    }
    }
};