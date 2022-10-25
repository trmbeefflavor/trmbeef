//
//  Artwork_Artist.h
//  ArtGallerySimplified
//
//   declaration of the following two classes in the namespace NS_ARTGALLERY:
//     -class Artwork;
//     -class Artist;
//

#ifndef Artwork_Artist_h
#define Artwork_Artist_h

//include the following utility file created for you
#include "util_date_uniqueIDs.h"

namespace NS_ARTGALLERY {
    /* From the DesignDoc:
     Relevant properties
     ID; //unique ID
     type; // which can be one of the following {painting, photography, drawing, sculpture, other}
     style; //which can be one of the following {fineArt, abstract, modern, popArt, other}}
     subject; // which can be one of the following {nature, portrait, animal, cartoon, other}
     Width in inches
     Height in inches
     Depth in inches
     year; //year in which the artwork was made
     artistID; //the ID of the artist who created this artwork.
     price
        Relevant data operations:
     set the initial values of an artwork's properties  ----->constructors
     retrieve an individual property    -----> accessors
     revise an individual property except its unique ID---->mutators
     */

    class Artwork {
    public:
        //Note: the following is a required list of functions.
        //      please feel free to add other functions as you see fit.

        Artwork(); //default constructor: ID(-1),aritistID(-1), type(ArtType::painting), style(ArtStyle::fineArt), subject(ArtSubject::nature), yearMade(2022), width(0.00),height(0.00),depth(0.00),price(0.00)

        //accessors
        int getID() const; //return the id or the artwork
        int getArtistID() const; //return the artistID
        ArtType getType() const; //return the artwork's type
        ArtStyle getStyle() const; //return the artwork's style
        ArtSubject getSubject() const; //retrun the artwork's subject
        int getYearMade() const; //return the yearMade
        double getWidth() const; //return width
        double getHeight() const; //return height
        double getDepth() const; //return depth
        double getPrice() const; //return price

        //mutators
        void setID(int newID); //newID-->ID
        void setArtistID(int newID); //newID-->artistID
        void setType(ArtType theType); //theType-->type
        void setStyle(ArtStyle theStyle); //theStyle-->style
        void setSubject(ArtSubject theSubject); //theSubject-->subject
        void setYearMade(int year); //year-->yearMade
        void setDimension(double w, double h, double d); //w-->width, h->height, d->depth
        void setPrice(double thePrice); //thePrice->price
    private:
        int ID; //a generated, unique ID
        int artistID; //the ID of the artist who made this work
        ArtType type;  //type of artwork: {painting, photography, drawing, sculpture, other}
        ArtStyle style; //style of artwork: {fineArt, abstract, modern, popArt, other}
        ArtSubject subject; //subject of artwork: {nature, portrait, animal, cartoon, other}
        int yearMade; //year when the artwork was made
        double width; //in inches
        double height; //in inches
        double depth; //in inches
        double price; //price of the artwork
    };

    /*
     ---Relevant data properties
     ID; //unique ID
     name //artist�s full name: first last
     email ; //artist�s email
     primaryArtType; //artist�s primary type of artworks, which can be one of the following {painting, photography, drawing, sculpture, other}
     birthYear; //year in which the artist was born in
     birthPlace; //the country where the artist was born
     ---Relevant data operations:
     set the initial value of an artist's properties  ----->constructors
     retrieve an individual property    -----> accessors
     revise an individual property---->mutators
     */
    class Artist {
    public:
        //default constructor: ID(-1),name("na"),email("na"),birthYear(1900),birthPlace("na"),primaryArtType(ArtType::painting)
        Artist();

        //accessors
        //returns an artist's ID
        int getID() const;
        //returns an artist's name
        std::string getName() const;
        //returns an artist's email
        std::string getEmail() const;
        //returns an artist's birthYear
        int getBirthYear() const;
        //returns an artist's birthPlace
        std::string getBirthPlace() const;
        //returns an artist's primary ArtType
        ArtType getPrimaryArtType() const;

        //mutators
        //changes an artist's ID to theID
        void setID(int theID);
        //changes an artist's name to theName
        void setName(std::string theName);
        //changes an artist's email to theEmail
        void setEmail(std::string theEmail);
        //changes an artist's birthYear to theYear
        void setBirthYear(int theYear);
        //changes an artist's birthPlace to thePlace
        void setBirthPlace(std::string thePlace);
        //returns an artist's primary ArtType to theType
        void setPrimaryArtType(ArtType theType);

    private:
        int ID; //a generated, unique ID
        std::string name;
        std::string email;
        int birthYear;
        std::string birthPlace;
        ArtType primaryArtType;
    };

    bool operator==(const Artist& lhs, const Artist& rhs);
    bool operator==(const Artwork& lhs, const Artwork& rhs);
}//end-of NS_ARTGALLERY

#endif /* Artwork_Artist_h */