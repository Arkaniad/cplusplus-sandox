
class Object
{
 public:
  Object(int arg_id);
  ~Object();
  int get_id() const;
 private:
  int id;
};

Object::Object(int arg_id){
  id = arg_id;
  #ifdef DEBUG
	std::cout << "[OBJ:INIT_"<< id << "]" << std::endl;
  #endif
}
Object::~Object(){
}
int Object::get_id(){
  return id;
};
