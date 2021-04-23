class ItemSeparator{
    
    private String name;
    private int quantity;
    private double price;
    
    ItemSeparator(String rawInput){
        int n = rawInput.length();
        int i = rawInput.indexOf("$$##");
        System.out.println(i+"");
        int j = rawInput.lastIndexOf("$$##");
        System.out.println(j+"");
        this.name = rawInput.substring(0,i);
        this.price = Double.parseDouble(rawInput.substring(i+4,j));
        this.quantity = Integer.parseInt(rawInput.substring(j+4,n));
    }
    
    public String getName(){
        return this.name;
    }
    public double getPrice(){
        return this.price;
    }
    public int getQuantity(){
        return this.quantity;
    }
}

public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		//ItemSeparator i = new ItemSeparator("Bread$$##12.5$$##10");
		ItemSeparator i = new ItemSeparator("Mobile Phone$$##599$$##2");
		System.out.println(i.getName()+" "+ i.getPrice() +" "+i.getQuantity());
		
	}
}
