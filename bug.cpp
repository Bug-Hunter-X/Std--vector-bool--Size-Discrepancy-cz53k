std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // This is fine
b = vec[1];  // This is fine
size_t size = vec.size(); // This may be incorrect!