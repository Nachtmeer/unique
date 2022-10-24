#ifndef SDIMACSParser_h
#define SDIMACSParser_h

#include <vector>
#include <string>
#include <unordered_map>

#include "QBFParser.h"

using std::vector;
using std::string;

class SDIMACSParser: virtual public QBFParser {
  public:
    SDIMACSParser(const string& filename);

  protected:
    SDIMACSParser();
    void readQuantifierBlock(const string& line);
    void readClause(const string& line);
    void addOutputGate();
    vector<string> convertClause(vector<int>& clause);

    virtual void printSDIMACSPrefix(std::ostream& out);
    virtual void addToClauseList(int alias, const GatePolarity polarity, vector<vector<int>>& clause_list);
    virtual void addOutputUnit(bool negate, vector<vector<int>>& clause_list);

    static const string EXISTS_STRING;
    static const string FORALL_STRING;
    static const string RANDOM_STRING;
};

#endif