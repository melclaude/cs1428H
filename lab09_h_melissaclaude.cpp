#include <iostream>


using namespace std;

struct song{

string songtitle;
string filename;
string genre;
int tracknumber;
bool favorite;

};

int main()
{
    bool music = 0;
    int choice;
    int songcount = 0;
    int favorite_songs = 0;
    song playlist[100] = {};

    while (music == 0)
    {



    cout <<  "1) Enter a new song" <<  endl;
    cout <<  "2) Delete song"  << endl;
    cout <<  "3) Display all songs" << endl;
    cout <<  "4) Edit a song"  << endl;
    cout <<  "5) Print favorites"  << endl;
    cout <<  "6) Exit" << endl;

    cin >> choice;

    switch(choice)
        {
            case 1:
                {
                    cout << "Enter a song title." << endl;
                    cin >> playlist[songcount].songtitle;
                    cout << "Enter the filename" << endl;
                    cin >> playlist[songcount].filename;
                    cout << "Enter genre" << endl;
                    cin >> playlist[songcount].genre;
                    cout << "What is the tracknumber?" << endl;
                    cin >> playlist[songcount].tracknumber;
                    cout << "Is this song a favorite?" << endl;
                    cin >> playlist[songcount].favorite;

                    //if playlist[songcount].favorite = 1
                    songcount = songcount + 1;
                    cout << endl;
                    cout << endl;
                    break;
                }
            case 2:
                {
                    int song_number;
                    cout << "Enter the song you would like to delete." << endl;
                    cin >> song_number;
                    playlist[song_number-1].songtitle = "";
                    playlist[song_number-1].filename = "";
                    playlist[song_number-1].genre = "";
                    playlist[song_number-1].tracknumber;
                    playlist[song_number-1].favorite = "";
                    cout << endl;
                    break;
                }
            case 3:
                {
                    for (int i = 0; i < songcount; i++)
                        cout << playlist[i].songtitle << endl;
                    cout << endl;
                    cout << endl;
                    break;
                }
            case 4:
                {
                    int song_number;
                    cout << "Enter the song number you would like to edit" << endl;
                    cin >> song_number;
                    cout << "Enter a song title." << endl;
                    cin >> playlist[song_number].songtitle;
                    cout << "Enter the filename" << endl;
                    cin >> playlist[song_number].filename;
                    cout << "Enter genre" << endl;
                    cin >> playlist[song_number].genre;
                    cout << "What is the tracknumber?" << endl;
                    cin >> playlist[song_number].tracknumber;
                    cout << "Is this song a favorite?" << endl;
                    cin >> playlist[song_number].favorite;
                    cout << endl;
                    cout << endl;
                    break;
                }
            case 5:
                {
                    for (int i = 0; i < favorite_songs; i++)
                        cout << playlist[i].favorite << endl;
                    cout << endl;
                    cout << endl;
                    break;
                }
            case 6:
                {
                    cout << "goodbye" << endl;
                    music = 1;
                }


            }
    }

return 0;


}

