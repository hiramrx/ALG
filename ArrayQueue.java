public class ArrayQueue
{
    private String[] items; //队列
    private int n; //队列长度
    private int head; //队头下标
    private int tail; //队尾下标

    //申请一个大小为n的数组作为队列
    public ArrayQueue(int n)
    {
        items = new String[n];
        this.n = n;
    }

    public boolean enqueue(String item)
    {
        if (tail == n) {
            return false;
        }
        items[tail] = item;
        ++tail;
        return true;
    }

    //出队操作，返回数组元素
    public String dequeue()
    {
        if (head == tail) {
            return null;
        }
        String item = items[head];
        ++head;
        return item;
    }

    //当队尾指针指向数组最后一个元素时，检查队列是否满队
    //不满队的队列就数据移动,再执行入队操作
    public boolean enqueue2(String item)
    {
        if (tail == n) {
            if (head == 0) return false;
            for　(int i = 0;i<=tail-head+1;++i) {
                items[i] = items[i+head];
            }
            head = 0;
            tail = tail-head;
        }
        items[tail] = item;
        ++tail;
        return true;
    }
}
