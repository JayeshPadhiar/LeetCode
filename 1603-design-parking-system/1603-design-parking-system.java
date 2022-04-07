class ParkingSystem {
    
    private HashMap<Integer, Integer> lot = new HashMap();

    public ParkingSystem(int big, int medium, int small) {
        lot.put(1, big);
        lot.put(2, medium);
        lot.put(3, small);
    }
    
    public boolean addCar(int carType) {
        if(lot.get(carType) != 0){
            lot.put(carType, lot.get(carType)-1);
            return true;
        }
        
        return false;  
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */