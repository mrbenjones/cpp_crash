# Introduction and Ambitions

I'm looking to improve my sense of [Mechancial Sympathy](https://dzone.com/articles/mechanical-sympathy) by programming 
in C++.  I am evaluating whether to apply for an MS program that requires competency in C++ and UNIX utilities in August.  
I would like to be able to complete some of the following by then. 

1. A flowing data pipeline in C++ streaming multiple data sources to something like an HD5 file or an Elastic database. 
2. A concordance generator that takes a file in a target language and configuration files that turn that file into a list of _headwords_ 
   (for example _sein_ in german for _bin_ , _bist_, or _ist_) sorted by part of speech, subtitle frequency, or another criterion.
   
## The First Project : Environment Building
I'm ripping the band-aid off and creating a single file that takes care of the most annoying features of C++ in a weekend (or less?)
* Make system (whole course will use Cmake -- Automake if they make me)
* Static and dynamic linked libraries and headers.
* Unit testing -- using gtest, and documenting all of my libraries (and key features of imported libraries) using gtest. 
* Sphinx and Doxygen -- maybe.  Looks like windows makes this hard. 