import java.io.*;
import java.util.*;

class Write{
	Write(String input, String output, String T) throws FileNotFoundException, IOException{
		if(T.equals("M")){
			minute(input, output);
		}
		if(T.equals("H")){
			hour(input, output);
		}
	}
	void minute(String input, String output) throws FileNotFoundException, IOException{
		try (BufferedReader br = new BufferedReader(new FileReader(input))) {
		    String line;
		    File fout = new File(output);
		    HashMap<String,Integer> hm = new HashMap<String,Integer>();
			FileOutputStream fos = new FileOutputStream(fout);
			BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(fos));
		    while ((line = br.readLine()) != null) {

		    	String s = line.substring(0,12);
		    	if(hm.containsKey(s)){
		    		int n = hm.get(s);
		    		n+=1;
		    		hm.put(s, n);
		    	}else{
		    		hm.put(s, 1);
		    	}
		    	
		    }

		    Map<String, Integer> map = new TreeMap<String, Integer>(hm);
		    for (String key : map.keySet()){
		    	bw.write(key+","+map.get(key).toString());
		    	bw.newLine();
			}
		    bw.close();   
		}
	}
	void hour(String input, String output) throws FileNotFoundException, IOException{
		try (BufferedReader br = new BufferedReader(new FileReader(input))) {
		    String line;
		    File fout = new File(output);
		    HashMap<String,Integer> hm = new HashMap<String,Integer>();
			FileOutputStream fos = new FileOutputStream(fout);
			BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(fos));
		    while ((line = br.readLine()) != null) {

		    	String s = line.substring(0,9);
		    	if(hm.containsKey(s)){
		    		int n = hm.get(s);
		    		n+=1;
		    		hm.put(s, n);
		    	}else{
		    		hm.put(s, 1);
		    	}
		    	
		    }

		    Map<String, Integer> map = new TreeMap<String, Integer>(hm);
		    for (String key : map.keySet()){
		    	bw.write(key+","+map.get(key).toString());
		    	bw.newLine();
			}
		    bw.close();   
		}	
	}
}



public class Parse{
	public static void main(String []args) throws IOException{
		Write w = new Write("file.txt","out.csv","M");
	}
}
