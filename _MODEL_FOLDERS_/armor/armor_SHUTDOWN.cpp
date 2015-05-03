    if(armor_NORMALMAP != 0) 
    { 
        glDeleteTextures(1, &armor_NORMALMAP); 
        armor_NORMALMAP = 0; 
    } 
    if(armor_COLORMAP  != 0)
    { 
        glDeleteTextures(1, &armor_COLORMAP); 
        armor_COLORMAP  = 0; 
    } 
    if(armor_EXP_MASK  != 0)
    { 
        glDeleteTextures(1, &armor_EXP_MASK); 
        armor_EXP_MASK  = 0; 
    } 
    if(armor_EMIT_MASK  != 0)
    { 
        glDeleteTextures(1, &armor_EMIT_MASK); 
        armor_EMIT_MASK  = 0; 
    }   
    if(armor_SPEC_MASK  != 0)
    { 
        glDeleteTextures(1, &armor_SPEC_MASK); 
        armor_SPEC_MASK  = 0; 
    }       
    if(armor_MIX_MASK  != 0)
    { 
        glDeleteTextures(1, &armor_MIX_MASK); 
        armor_MIX_MASK  = 0; 
    }    
    if(armor_NORMAL_MASK  != 0)
    { 
        glDeleteTextures(1, &armor_NORMAL_MASK); 
        armor_NORMAL_MASK  = 0; 
    }       
 
//-------------------------------------------------- 
    if(armor_VBO  != 0) 
    { 
        glDeleteBuffers(1, &armor_VBO); 
        armor_VBO  = 0; 
    } 
    if(armor_INDICES_IBO  != 0) 
    { 
        glDeleteBuffers(1, &armor_INDICES_IBO); 
        armor_INDICES_IBO  = 0; 
    } 


