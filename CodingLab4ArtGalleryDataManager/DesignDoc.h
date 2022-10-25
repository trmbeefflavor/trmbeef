//
//  DesignDoc.h
//  ArtGallerySimplified
//
//

/* This Document is fully commented. As such, its content will be
 ignored by the compiler.
 ***************************
Please check the full DesignDoc included in the project description.

 Your to-do #1:  describe your algorithm in pseudo code for the following data operation in the Gallery class:
    - curateArtwork(Artwork newItem, Artist artist); //artwork curation: curate a new piece of artwork for the gallery. newItem.ID and artist.ID are set to -1 (not available) initially. As a result, you’ll need to assign this newItem a unique ID. Check if the artist is already on the artistList using their name and email. If new, assign this artist a unique ID and add them to the artistList. if not new, retrieve their ID from the artistList. You will also need to update the artworkListCurated and the artworkListForSale. Finally, you will need to update the curationRecords to include this new curation.

 Your to-do #2:  describe your algorithm in pseudo code for the following data operation in the Gallery class:
    - sellArtwork(int artworkID, Customer customer); //artwork sale: sell a for-sale artwork to a customer. customer.ID is set to -1 initially. So you will need to find out if this customer is new or not using their name and email address. If new, assign this customer a unique ID and add them to the customerList. If not, retrieve their ID from customerList. You will also need to check if the specified artworkID is still for sale. If yes, update the artworkListForSale by removing this artwork that was just sold, and update the salesRecords to include this new sale.

 Your to-do #3:  describe your algorithm in pseudo code for the following data operation in the Gallery class:
     - genArtworksReport( ReportType reportType); //summarize a gallery's curated artworks by their type, style, and subject. ReportType is an enum class that consists of {artType, artStyle, artSubject}.  For example, if reportType is ReportType::artType, your summary will consist of the following pairs: (ArtType::painting, #), (ArtType::photography, #), (ArtType::drawing, #), (ArtType::sculpture, #), (ArtType::other, #). Here, ArtType is another user-defined enum class. You algorithm is going to replace the # with the actual number of artworks of the corresponding artType.

** End-of-DesignDoc_h */