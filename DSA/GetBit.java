class GetBit{
    public static void main(String[] args) {
        System.out.println(getBit(5, 2));
        System.out.println(setBit(5, 1));
    }
    
    // Get a bit at given position
    static int getBit(int n, int pos){
        if ((n & (1<<pos))!=0) return 1;
        else return 0;
    }


    // Set the bit 1 at the given position
    static int setBit(int n, int pos){
        return (n|(1<<pos));
    }

    // clear bit at given position

    static int clearBit(int n, int pos){
        int mask = ~(1<<pos);
        return (n & mask);
    }

    // int updateBit(int n, int pos){
        
    // }
}