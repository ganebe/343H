#ifndef HASH_H_
#define HASH_H_

#include <vector>
#include <list>
#include <functional>
#include <utility>
using namespace std;

template<typename KeyType, typename ValueType>
class Hash {
public:
    Hash() {
    }

    size_t size() const {
        
    }

    bool addItem(const KeyType& key, const ValueType& value) {
        
    }

    void forEachItem(const function<void(const pair<KeyType, ValueType>&)>& func) const {
        
    }

    const ValueType* getItem(const KeyType& key) const {
        
    }

    bool removeItem(const KeyType& key) {
        
    }

private:
    vector<list<pair<KeyType, ValueType>>> data_;

    int hashFunction(const KeyType& key) const {
        
    }
};
#endif
