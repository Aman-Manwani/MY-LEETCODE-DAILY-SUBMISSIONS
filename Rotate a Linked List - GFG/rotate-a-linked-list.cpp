//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    int length(Node* head)
    {
        int len=0;
        while(head!=NULL)
        {
            head=head->next;
            len++;
        }
        return len;
    }
    Node* rotate(Node* head, int k)
    {
        // cout<<length(head)<<endl;
        if(length(head)==k)
        {
            return head;
        }
        int x=(k-1);
        Node * start=head;
        Node* temp = head;
        while(x--)
        {
            temp=temp->next;
        }
        Node*tinki=temp;
        temp=temp->next;
        Node* chinki = temp;
        while(chinki->next!=NULL)
        {
            chinki=chinki->next;
        }
        chinki->next=start;
        tinki->next=NULL;
        head=temp;
        return temp;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends