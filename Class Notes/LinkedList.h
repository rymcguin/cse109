class ListNode{
    public:
        ListNode(int Value);
        ~ListNode();
        protected:
        int value;
        ListNode* next;
};

class LinkedList{
    public: 
        LinkedList();
        ~LinkedList();
        void insert(int value);
        void find(int value);
        void print();
    protected:
        int length;
        ListNode* head;
        ListNode* tail;
};