GLfloat body_POSITION[]             = { 0.000000f, 0.000000f, -0.000000f, 1.0 }; 
GLfloat body_ROTATION[]             = { 0.000000f, 0.000000f, 1.000000f, 0.000000f }; 
GLfloat body_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//----------------------------------------------------------------- 
GLfloat body_LIGHT_POSITION_01[]    = { 2.0, 15.0, 30.0, 1.0 }; 
GLfloat body_SHININESS              = 80.0; 
GLfloat body_ATTENUATION            =  1.0; 
//----------------------------------------------------------------- 
GLuint body_VBO; 
GLuint body_INDICES_IBO; 
//----------------------------------------------------------------- 
GLuint body_NORMALMAP; 
//-SHADOWMAP
GLuint body_COLORMAP;
GLuint body_EXP_MASK; 
GLuint body_EMIT_MASK;     
GLuint body_SPEC_MASK; 
GLuint body_MIX_MASK; 
GLuint body_NORMAL_MASK; 

//----------------------------------------------------------------- 
GLfloat body_boundingBox[6]; 
