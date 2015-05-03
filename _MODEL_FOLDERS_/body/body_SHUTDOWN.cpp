    if(body_NORMALMAP != 0) 
    { 
        glDeleteTextures(1, &body_NORMALMAP); 
        body_NORMALMAP = 0; 
    } 
    if(body_COLORMAP  != 0)
    { 
        glDeleteTextures(1, &body_COLORMAP); 
        body_COLORMAP  = 0; 
    } 
    if(body_EXP_MASK  != 0)
    { 
        glDeleteTextures(1, &body_EXP_MASK); 
        body_EXP_MASK  = 0; 
    } 
    if(body_EMIT_MASK  != 0)
    { 
        glDeleteTextures(1, &body_EMIT_MASK); 
        body_EMIT_MASK  = 0; 
    }   
    if(body_SPEC_MASK  != 0)
    { 
        glDeleteTextures(1, &body_SPEC_MASK); 
        body_SPEC_MASK  = 0; 
    }
    if(body_MIX_MASK  != 0)
    { 
        glDeleteTextures(1, &body_MIX_MASK); 
        body_MIX_MASK  = 0; 
    }    
    if(body_NORMAL_MASK  != 0)
    { 
        glDeleteTextures(1, &body_NORMAL_MASK); 
        body_NORMAL_MASK  = 0; 
    }       
    
  
       
    //-------------------------------------------------- 
    if(body_VBO  != 0) 
    { 
        glDeleteBuffers(1, &body_VBO); 
        body_VBO  = 0; 
    } 
    if(body_INDICES_IBO  != 0) 
    { 
        glDeleteBuffers(1, &body_INDICES_IBO); 
        body_INDICES_IBO  = 0; 
    } 
