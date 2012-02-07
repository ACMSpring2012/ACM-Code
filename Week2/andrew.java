public class Acm2 {
	public static void main(String[] args) {
		int p = solve(3121);
		if (p>0){
			System.out.format("Found a soluion with %d persons\n", p);
		}else{
			System.out.format("No solution found \n");
		}
	}
	
	static int solve(int input){
		for (int persons = 1; persons < 15; persons++){
			int coconuts = input;
			for (int p=0;p<=persons;p++){
				int remove = (int)(coconuts/persons);
				int extra = coconuts%persons;
				coconuts -= remove+1;
				if (extra == 0 && p == persons){//then we are ok
					return persons;
				}else if (extra != 1){
					break; //solution no good
				}
				//System.out.format("Removing: %d, extra: %d, coconuts: %d \n", remove, extra, coconuts);
			}
		}
		return -1;
	}
}
