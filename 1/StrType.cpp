#include "StrType.h"
#include <cctype>
void StrType::MakeEmpty()
// Post: letters is empty string.
{
	letters[0] = '\0';
}
// Prototypes of auxiliary functions.
// Note: If skip is true, nonallowable leading characters are
// skipped. If end-of-file is encountered while skipping
// characters, the empty string is returned. If the number
// of allowable characters exceeds MAX_CHARS, the rest are
// read and discarded.
void GetAlphaNum(bool skip, char letters[], std::ifstream& inFile);
// Post: letters array contains only alphanumeric characters.
void GetAlpha(bool skip, char letters[], std::ifstream& inFile);
// Post: letters array contains only alphabetic characters.
void GetNonWhite(bool skip, char letters[], std::ifstream& inFile);
// Post: letters array contains only nonwhitespace characters.
void GetTilNew(bool skip, char letters[], std::ifstream& inFile);
// Post: letters array contains everything up to newline character.
void GetAlphaNum(bool skip, char letters[]);
// Post: letters array contains only alphanumeric characters.
void GetAlpha(bool skip, char letters[]);
// Post: letters array contains only alphabetic characters.
void GetNonWhite(bool skip, char letters[]);
// Post: letters array contains only nonwhitespace characters.
void GetTilNew(bool skip, char letters[]);
// Post: letters array contains everything up to newline character.
 
 
void StrType::GetString(bool skip, InType charsAllowed)
{
switch (charsAllowed)
 {
  case ALPHA_NUM : GetAlphaNum(skip, letters);
    break;
  case ALPHA : GetAlpha(skip, letters);
    break;
  case NON_WHITE : GetNonWhite(skip, letters);
    break;
  case NOT_NEW : GetTilNew(skip, letters);
    break;
 }
}

void GetAlphaNum(bool skip, char letters[])
// Post: If skip is true, non-alphanumeric letters are skipped.
// Alphanumeric characters are read and stored until a
// non-alphanumeric character is read or MAX_CHARS characters
// have been stored. If the stream is not in the fail state,
// the last character read was a non-alphanumeric character.
{
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {// Skip non-alphanumeric characters.
    cin.get(letter);
    while (!isalnum(letter) && cin)
    cin.get(letter);
  }
 else
   cin.get(letter);
 if (!cin || !isalnum(letter))
 // No legal character found; empty string returned.
    letters[0] = '\0';
 else
 {// Read and collect characters.
   do
    {
      letters[count] = letter;
      count++;
      cin.get(letter);
    } while (isalnum(letter) && cin && (count < MAX_CHARS));
   letters[count] = '\0';
  // Skip extra characters if necessary.
  if (count == MAX_CHARS && isalnum(letter))
  do
   {
     cin.get(letter);
    } while (isalnum(letter) && cin);
  }
}
 
void GetAlpha(bool skip, char letters[])
// Post: letters array contains only alphabetic characters.
{
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {// Skip non-alphanumeric characters.
    cin.get(letter);
    while (!isalpha(letter) && cin)
    cin.get(letter);
  }
 else
   cin.get(letter);
 if (!cin || !isalpha(letter))
 // No legal character found; empty string returned.
    letters[0] = '\0';
 else
 {// Read and collect characters.
   do
    {
      letters[count] = letter;
      count++;
      cin.get(letter);
    } while (isalpha(letter) && cin && (count < MAX_CHARS));
   letters[count] = '\0';
  // Skip extra characters if necessary.
  if (count == MAX_CHARS && isalpha(letter))
  do
   {
     cin.get(letter);
    } while (isalpha(letter) && cin);
  }

}

void GetNonWhite(bool skip, char letters[])
// Post: letters array contains only nonwhitespace characters.
{
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {// Skip non-alphanumeric characters.
    cin.get(letter);
    while (isspace(letter) && cin)
    cin.get(letter);
  }
 else
   cin.get(letter);
 if (!cin || isspace(letter))
 // No legal character found; empty string returned.
    letters[0] = '\0';
 else
 {// Read and collect characters.
   do
    {
      letters[count] = letter;
      count++;
      cin.get(letter);
    } while (!isspace(letter) && cin && (count < MAX_CHARS));
   letters[count] = '\0';
  // Skip extra characters if necessary.
  if (count == MAX_CHARS && !isspace(letter))
  do
   {
     cin.get(letter);
    } while (!isspace(letter) && cin);
  }

}

void GetTilNew(bool skip, char letters[])
// Post: If skip is true, newline characters are skipped.
// All characters are read and stored until a newline
// character is read or MAX_CHARS characters have been
// stored. If the stream is not in the fail state, the
// last character read was a newline character.
{
using namespace std;
char letter;
int count = 0;
if (skip)
  {// Skip newlines.
  cin.get(letter);
  while ((letter == '\n') &&cin)
  cin.get(letter);
  }
 else
   cin.get(letter);
if (!cin || letter == '\n')
  letters[0] = '\0';
else
 {// Read and collect characters.
 do
  {
    letters[count] = letter;
    count++;
    cin.get(letter);
  } while ((letter != '\n') && cin && (count < MAX_CHARS));
 letters[count] = '\0';
// Skip extra characters if necessary.
 if (count == MAX_CHARS && letter != '\n')
  do
    {
      cin.get(letter);
    } while ((letter != '\n') && cin);
  }
}

void StrType::GetStringFile(bool skip, InType charsAllowed,std::ifstream& inFile)
{
 switch (charsAllowed)
 {
  case ALPHA_NUM : GetAlphaNum(skip, letters, inFile);
    break;
  case ALPHA : GetAlpha(skip, letters, inFile);
    break;
  case NON_WHITE : GetNonWhite(skip, letters, inFile);
    break;
  case NOT_NEW : GetTilNew(skip, letters, inFile);
    break;
 }
}

 
void GetAlphaNum(bool skip, char letters[], std::ifstream& inFile)
// Post: If skip is true, non-alphanumeric letters are skipped.
// Alphanumeric characters are read and stored until a
// non-alphanumeric character is read or MAX_CHARS characters
// have been stored. If the stream is not in the fail state,
// the last character read was a non-alphanumeric character.
{
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {// Skip non-alphanumeric characters.
    inFile.get(letter);
    while (!isalnum(letter) && inFile)
    inFile.get(letter);
  }
 else
   inFile.get(letter);
 if (!inFile || !isalnum(letter))
 // No legal character found; empty string returned.
    letters[0] = '\0';
 else
 {// Read and collect characters.
   do
    {
      letters[count] = letter;
      count++;
      inFile.get(letter);
    } while (isalnum(letter) && inFile && (count < MAX_CHARS));
   letters[count] = '\0';
  // Skip extra characters if necessary.
  if (count == MAX_CHARS && isalnum(letter))
  do
   {
     inFile.get(letter);
    } while (isalnum(letter) && inFile);
  }
}
/*TODO change isalnum to isalpha in GetAlpha() */ 
void GetAlpha(bool skip, char letters[], std::ifstream& inFile)
// Post: letters array contains only alphabetic characters.
{
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {// Skip non-alphanumeric characters.
    inFile.get(letter);
    while (!isalpha(letter) && inFile)
    inFile.get(letter);
  }
 else
   inFile.get(letter);
 if (!inFile || !isalpha(letter))
 // No legal character found; empty string returned.
    letters[0] = '\0';
 else
 {// Read and collect characters.
   do
    {
      letters[count] = letter;
      count++;
      inFile.get(letter);
    } while (isalpha(letter) && inFile && (count < MAX_CHARS));
   letters[count] = '\0';
  // Skip extra characters if necessary.
  if (count == MAX_CHARS && isalpha(letter))
  do
   {
     inFile.get(letter);
    } while (isalpha(letter) && inFile);
  }

}

void GetNonWhite(bool skip, char letters[], std::ifstream& inFile)
// Post: letters array contains only nonwhitespace characters.
{
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {// Skip non-alphanumeric characters.
    inFile.get(letter);
    while (isspace(letter) && inFile)
    inFile.get(letter);
  }
 else
   inFile.get(letter);
 if (!inFile || isspace(letter))
 // No legal character found; empty string returned.
    letters[0] = '\0';
 else
 {// Read and collect characters.
   do
    {
      letters[count] = letter;
      count++;
      inFile.get(letter);
    } while (!isspace(letter) && inFile && (count < MAX_CHARS));
   letters[count] = '\0';
  // Skip extra characters if necessary.
  if (count == MAX_CHARS && !isspace(letter))
  do
   {
     inFile.get(letter);
    } while (!isspace(letter) && inFile);
  }

}


void GetTilNew(bool skip, char letters[], std::ifstream& inFile)
// Post: If skip is true, newline characters are skipped.
// All characters are read and stored until a newline
// character is read or MAX_CHARS characters have been
// stored. If the stream is not in the fail state, the
// last character read was a newline character.
{
using namespace std;
char letter;
int count = 0;
if (skip)
  {// Skip newlines.
  inFile.get(letter);
  while ((letter == '\n') &&inFile)
  inFile.get(letter);
  }
 else
   inFile.get(letter);
if (!inFile || letter == '\n')
  letters[0] = '\0';
else
 {// Read and collect characters.
 do
  {
    letters[count] = letter;
    count++;
    inFile.get(letter);
  } while ((letter != '\n') && inFile && (count < MAX_CHARS));
 letters[count] = '\0';
// Skip extra characters if necessary.
 if (count == MAX_CHARS && letter != '\n')
  do
    {
      inFile.get(letter);
    } while ((letter != '\n') && inFile);
  }
}

void StrType::PrintToScreen(bool newLine)
// Post: letters has been sent to the output stream.
{
  using namespace std;
  if (newLine)  cout << endl;
  cout << letters;
}

void StrType::PrintToFile(bool newLine, std::ofstream& outFile)
// Post: letters has been sent to the output stream.
{
  using namespace std;
  if (newLine)  outFile << endl;
  outFile << letters;
  
}

#include <cstring>
void StrType::CopyString(StrType& newString)
// Post: letters has been copied into newString.letters.
{
std::strcpy(newString.letters, letters);
}
 
int StrType::LengthIs()
// Post: Function value = length of letters string
{
return std::strlen(letters);
}

