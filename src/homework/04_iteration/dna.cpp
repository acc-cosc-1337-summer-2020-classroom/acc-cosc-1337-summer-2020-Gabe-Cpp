#include "dna.h"
#include <cctype>
#include <string>

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string & dna){
    double gc_total = 0, gc_content=0;
    int length= dna.length();
        for(int i= 0; i < length; i++){
        char ltr= dna[i];
        if ((ltr == 'G') || (ltr == 'C')){
            gc_total ++;
        }
    }
    gc_content= gc_total/length;
    return gc_content;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string dna){
    std::string reverse_string;
    int length= dna.length();
        for(int i= length-1; i >= 0; --i){
            char ltr= dna[i];
            reverse_string.push_back(ltr);
        }
    return reverse_string;

}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

std::string get_dna_complement(std::string dna){
    std::string complement_dna;
    complement_dna= get_reverse_string (dna);
    std::string complement_string;
    int length= complement_dna.length();
        for(int i= 0; i < length; i++){
        char ltr= complement_dna[i];
            if (ltr == 'A') {
                complement_string.push_back('T');
            }
            if (ltr == 'T') {
                complement_string.push_back('A');
            }
            if (ltr == 'C') {
                complement_string.push_back('G');
            }
            else if (ltr == 'G') {
                complement_string.push_back('C');
            }
        }
    return complement_string;
}