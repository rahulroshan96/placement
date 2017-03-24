import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

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

class RatingCompare implements Comparator<Movie>{
	public int compare(Movie m1, Movie m2){
		if(m1.rating > m2.rating) return 1;
		else if(m1.rating < m2.rating) return -1;
		else return 0;
	}
}

class NameCompare implements Comparator<Movie>{
	public int compare(Movie m1, Movie m2){
		return m1.name.compareTo(m2.name); // compare to from string class
	}
}


public class ComparableClass {

	public static void main(String[] args){
		ArrayList<Movie> al = new ArrayList<Movie>();
		al.add(new Movie("C",8.2,1990));
		al.add(new Movie("B",7.2,1991));
		al.add(new Movie("Z",6.2,1920));
		al.add(new Movie("A",8.1,1989));
		
		System.out.println("Sorted by Year:");
		Collections.sort(al); // comparable sort
		for(Movie m:al){
			m.getDetails();
		}
		
		
		NameCompare nc = new NameCompare();
		Collections.sort(al,nc); // comparator sort
		
		System.out.println("Sorted by Name");
		for(Movie m:al){
			m.getDetails();
		}
		
		System.out.println("Sorted by Rating:");
		RatingCompare rc = new RatingCompare(); //comparator sort
		Collections.sort(al, rc);
		
		for(Movie m:al){
			m.getDetails();
		}
	}
}
