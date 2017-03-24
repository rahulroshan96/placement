import java.util.ArrayList;
import java.util.Collections;

class Movie implements Comparable<Movie>{
	String name;
	double rating;
	int year;
	
	Movie(String name, double rating, int year){
		this.name = name;
		this.rating = rating;
		this.year = year;
	}
	
	public int compareTo(Movie m){
		return this.year - m.year;
	}
	
	void getDetails(){
		System.out.println(this.name + " "+this.rating+" "+this.year);
	}
}

public class ComparableClass {

	public static void main(String[] args){
		ArrayList<Movie> al = new ArrayList<Movie>();
		al.add(new Movie("C",8.2,1990));
		al.add(new Movie("B",7.2,1991));
		al.add(new Movie("Z",6.2,1920));
		al.add(new Movie("A",8.1,1989));
		
		Collections.sort(al);
		
		for(Movie m:al){
			m.getDetails();
		}
	}
	
}
