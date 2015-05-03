    skin_A1A_SHADER = glCreateProgram();                                                                                     
        //----------------------------------------------------                                                                  
    const GLchar *vertexSource_skin_A1A =                                                                                    

    " #define highp                                                                                                                 \n" 
    
    //--------------------------------------------     
    "    attribute       vec4   position;                                                                                           \n" 
    "    attribute       vec3   normal;                                                                                             \n" 
    "    attribute       vec2   uv0;                                                                                                \n" 
    //--------------------------------------------   
    "    uniform         mat4   shadowTexMatrix;                                                                                    \n"           
    "    uniform         mat4   modelRotationINVmatrix;                                                                             \n"    
    "    uniform         mat4   projectionMatrix;                                                                                   \n"     
    "    uniform         mat4   modelViewMatrix;                                                                                    \n"     

    //--------------------------------------------                                        
    "    uniform  highp  vec4   light0_POS;                                                                                         \n" 
    "    uniform  highp  vec4   light1_POS;                                                                                         \n"     
    "    uniform  highp  vec4   light2_POS;                                                                                         \n"      
    //--------------------------------------------
    "    varying  highp  vec4   shadow_uvPASS;                                                                                      \n"       
    //--------------------------------------------
    "    varying  highp  vec4   light0_posPASS;                                                                                     \n" 
    "    varying  highp  vec4   light1_posPASS;                                                                                     \n"     
    "    varying  highp  vec4   light2_posPASS;                                                                                     \n"     
   
    //======================================
    "    varying  highp  vec2   uv0_PASS;                                                                                           \n" 
    //======================================   
    "    varying    highp   vec4    Vertex;                                                                                         \n"                                                          
    "    varying    highp   vec4    inverseEye;                                                                                     \n"   
    "    varying    highp   vec3    invertView;                                                                                     \n" 

    //======================================    
    
    
    //===============================================================================================
    
    " void main()                                                                                                                   \n" 
    " {                                                                                                                             \n" 
    
    "     Vertex                  = modelViewMatrix * position;                                                                     \n"  
    "     inverseEye              = normalize(modelRotationINVmatrix * vec4(0.0, 0.0, -1.0, 0.0));                                  \n"          
    "     invertView              = normalize(Vertex.xyz * inverseEye.w - inverseEye.xyz * Vertex.w);                               \n"  
       
          //-------------------------------------------------------------------------------    
    "     shadow_uvPASS           =  shadowTexMatrix  * position;                                                                   \n" 
          //-------------------------------------------------------------------------------
    "     uv0_PASS                =  uv0;                                                                                           \n" 
          //===============================================================================
    "     light0_posPASS          =  modelRotationINVmatrix * light0_POS;                                                           \n" 
    "     light1_posPASS          =  modelRotationINVmatrix * light1_POS;                                                           \n"           
    "     light2_posPASS          =  modelRotationINVmatrix * light2_POS;                                                           \n"           
        
          //-------------------------------------------------------------------------------
    "     gl_Position             =  projectionMatrix * position;                                                                   \n" 
    
    " } \n";   
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_skin_A1A =                                                                                  

    "#ifdef GL_ES                                                                                                                   \n" 
    "#else                                                                                                                          \n" 
    "#define highp                                                                                                                  \n" 
    "#endif                                                                                                                         \n" 
    
    
    
    
    "    uniform  sampler2D     NormalMAP;                                                                                          \n" 
    "    uniform  sampler2D     ShadowMAP;                                                                                          \n"   
    "    uniform  sampler2D     ColorMAP;                                                                                           \n"     
    "    uniform  sampler2D     M1_MAP;                                                                                           \n"   
 
    //--------------------------------------------
    "    uniform  highp  float  f_0;                                                                                                \n"    

    //--------------------------------------------
      
    
    //--------------------------------------------
    "    uniform  highp  float  shadowBias;                                                                                         \n"        
    //--------------------------------------------    
    "    varying  highp  vec4   shadow_uvPASS;                                                                                      \n"       
    //-------------------------------------------- 
    "    varying  highp  vec4   light0_posPASS;                                                                                     \n" 
    "    varying  highp  vec4   light1_posPASS;                                                                                     \n"     
    "    varying  highp  vec4   light2_posPASS;                                                                                     \n"     

    //======================================
    "    varying  highp  vec2   uv0_PASS;                                                                                           \n" 
    //======================================
    "             highp  vec3   normalTex;                                                                                          \n" 
    "             highp  float  nDotL0;                                                                                             \n" 
    //--------------------------------------------
    //"             highp  float  bias;                                                                                             \n"   
    "             highp  float  comp;                                                                                               \n" 
    "             highp  float  depth_PowerVR;                                                                                      \n" 
    "             highp  float  shadow;                                                                                             \n" 
    //--------------------------------------------    
    "             highp  vec4   colorTex;                                                                                           \n" 
    "             highp  float  mask1;                                                                                              \n" 
    //--------------------------------------------                                                                       
    
    //======================================   
    "    varying    highp   vec4    Vertex;                                                                                         \n"                                                          
    "    varying    highp   vec4    inverseEye;                                                                                     \n"   
    "    varying    highp   vec3    invertView;                                                                                     \n" 
         //---------
    "               highp vec3   Reflect;                                                                                           \n"                                                                  
    "               highp vec3   RH;                                                                                                \n"                                                               
    "               highp float  fresnel;                                                                                           \n" 
    "               highp float  fresnelReflectance = 0.1;                                                                          \n" 	                                                      
    "               highp vec4   fresnelTex;                                                                                        \n" 
    //====================================== 
    "               highp vec4   color_A;                                                                                           \n" 
    "               highp vec4   color_B;                                                                                           \n"   
    "               highp vec4   color_C;                                                                                           \n"   
    
    //======================================  
    
        
    //=======================================================================================================================                      
  
    "void main()                                                                                                                    \n" 
    "{                                                                                                                              \n" 
    "    normalTex                =  texture2D(NormalMAP,     uv0_PASS.xy).xyz;             \n" //CorrectedBlenderPose 
    "    colorTex                 =  texture2D(ColorMAP,      uv0_PASS.xy);                                                          \n"     
//    "    mask1                =  texture2D(M1_MAP,         uv0_PASS.xy).r;                                                        \n" 
        //-------
   
    
    //-----------------------------------------------------------------------------------------------------------------
    "    normalTex                =  normalize((normalTex  - 0.5));                                                     \n" 
    "    normalTex.zy             =  normalTex.zy * -1.0;                                                                           \n" 
    "    nDotL0                   =  max(dot(normalTex, normalize(light0_posPASS.xyz - normalize(gl_FragCoord.xyz))), 0.0);         \n" 
    //---------------------------------------------------------------------------------------------------------------  //===================================================================================== 
                                         //"bias                  =  shiny * tan(acos(nDotL0));                                     \n" 
                                         //"bias                  =  clamp(bias, 0.0, 0.1);                                         \n"               
    "    comp                     = (shadow_uvPASS.z / shadow_uvPASS.w) - shadowBias;\n" //"    bias =  0.006114; \n"  
    "    depth_PowerVR            =  texture2DProj(ShadowMAP, shadow_uvPASS).r;                                                     \n" 
   
    "    shadow                   =  comp <= depth_PowerVR ? 1.0 : 0.5;                                                             \n" 
    //---------------------------------------------------------------------------------------------------------------  //===================================================================================== 




//==============================================================
    "    gl_FragColor                   =       colorTex;                                                                                                                       \n" 

    "    gl_FragColor.w                 =       shadow;                                                                                                                \n"     
  
    
    
    "}\n";

    
        
        
        
    //=======================================================================================================================                   

        skin_A1A_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( skin_A1A_SHADER_VERTEX, 1, &vertexSource_skin_A1A, NULL );                                        
        glCompileShader( skin_A1A_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        skin_A1A_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( skin_A1A_SHADER_FRAGMENT, 1, &fragmentSource_skin_A1A, NULL );                                    
        glCompileShader(skin_A1A_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( skin_A1A_SHADER, skin_A1A_SHADER_VERTEX );                                                        
        glAttachShader( skin_A1A_SHADER, skin_A1A_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(skin_A1A_SHADER,   0, "position");                                                              
        glBindAttribLocation(skin_A1A_SHADER,   1, "normal");                                                            
        glBindAttribLocation(skin_A1A_SHADER,   2, "uv0");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( skin_A1A_SHADER_VERTEX);                                                                             
        glDeleteShader( skin_A1A_SHADER_FRAGMENT);                                                                           
        glLinkProgram(skin_A1A_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_SHADOW_TEX_MATRIX_skin_A1A                         = glGetUniformLocation(skin_A1A_SHADER, "shadowTexMatrix");  
        UNIFORM_MODEL_ROTATIONinv_MATRIX_skin_A1A                  = glGetUniformLocation(skin_A1A_SHADER, "modelRotationINVmatrix"); 
        UNIFORM_PROJECTION_MATRIX_skin_A1A                         = glGetUniformLocation(skin_A1A_SHADER, "projectionMatrix");          
        UNIFORM_MODELVIEW_MATRIX_skin_A1A                          = glGetUniformLocation(skin_A1A_SHADER, "modelViewMatrix");                  
  
        //-------------------------------      
        UNIFORM_LIGHT0_POS_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "light0_POS");
        UNIFORM_LIGHT1_POS_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "light1_POS");
        UNIFORM_LIGHT2_POS_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "light2_POS");   
        //================================== 
        UNIFORM_shadowBias_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "shadowBias");  
        //================================== 
        UNIFORM_f_0_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_0"); 
        UNIFORM_f_1_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_1"); 
        UNIFORM_f_2_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_2"); 
        UNIFORM_f_3_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_3"); 
        UNIFORM_f_4_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_4"); 
        UNIFORM_f_5_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_5"); 
        UNIFORM_f_6_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_6"); 
        UNIFORM_f_7_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_7"); 
        UNIFORM_f_8_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_8"); 
        UNIFORM_f_9_skin_A1A                                       = glGetUniformLocation(skin_A1A_SHADER, "f_9"); 


                                   
        //--------------------------------
        UNIFORM_TEX_DOT3_skin_A1A                                  = glGetUniformLocation(skin_A1A_SHADER, "NormalMAP");     
        UNIFORM_TEX_SHADOW_skin_A1A                                = glGetUniformLocation(skin_A1A_SHADER, "ShadowMAP");           
        UNIFORM_TEX_COLOR_skin_A1A                                 = glGetUniformLocation(skin_A1A_SHADER, "ColorMAP");  
        UNIFORM_TEX_MASK1_skin_A1A                                 = glGetUniformLocation(skin_A1A_SHADER, "M1_MAP");  

//######################################################
#include "settings.cpp"











