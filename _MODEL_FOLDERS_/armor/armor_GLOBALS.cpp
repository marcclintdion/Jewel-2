GLfloat armor_POSITION[]             = { 0.000000f, 0.000000f, -0.000000f, 1.0 }; 
GLfloat armor_ROTATION[]             = { 0.000000f, 0.000000f, 1.000000f, 0.000000f }; 
GLfloat armor_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//----------------------------------------------------------------- 

//----------------------------------------------------------------- 
GLuint armor_VBO; 
GLuint armor_INDICES_IBO; 
//----------------------------------------------------------------- 
GLuint armor_NORMALMAP; 
//-SHADOWMAP
GLuint armor_COLORMAP;
GLuint armor_EXP_MASK; 
GLuint armor_EMIT_MASK;     
GLuint armor_SPEC_MASK; 
GLuint armor_MIX_MASK; 
GLuint armor_NORMAL_MASK; 
 
//----------------------------------------------------------------- 
GLfloat armor_boundingBox[6]; 
