
#include "Meta_Maps.h"

#include <{{api}}binding/Version.h>


using namespace {{api}};


namespace {{api}}binding
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
{{#features.items}}    { { {{item.major}}, {{item.minor}} }, { {{#item.reqCommandStrings.items}}"{{item.identifier}}"{{^last}}, {{/last}}{{/item.reqCommandStrings.items}} } }{{^last}},{{/last}}
{{/features.items}}
};


} // namespace {{api}}binding
