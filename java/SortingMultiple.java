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
	public double getRating(){
		return this.rating;
	}
	public String getName(){
		return this.name;
	}
	public int getYear(){
		return this.year;
	}
	void getDetails(){
		System.out.println(this.name + " "+this.rating+" "+this.year);
	}
}


class multipleCompare implements Comparator<Movie>{
	public int compare(Movie m1, Movie m2){
		int c;
		c = m1.name.compareTo(m2.name);
		if(c==0){
			if(m1.getRating() > m2.getRating())
				c = 1;
			else if(m1.getRating() < m2.getRating())
				c = -1;
			else c=0;
		}
		if(c==0){
			if(m1.getYear() > m2.getYear())
				c = 1;
			else if(m1.getYear() < m2.getYear())
				c = -1;
			else c=0;
		}
		return c;
	}
}


public class SortingMultiple{

	public static void main(String[] args){
		ArrayList<Movie> al = new ArrayList<Movie>();
		al.add(new Movie("C",8.2,1990));
		al.add(new Movie("C",6.2,1991));
		al.add(new Movie("C",9.2,1990));
		al.add(new Movie("B",7.2,1991));
		al.add(new Movie("Z",6.2,1920));
		al.add(new Movie("A",8.1,1989));
		

		Collections.sort(al, new multipleCompare());
		
		for(Movie m:al){
			m.getDetails();
		}
	}
}
