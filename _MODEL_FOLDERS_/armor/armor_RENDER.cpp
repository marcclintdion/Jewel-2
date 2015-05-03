setupTransforms_MainColor();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, armor_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, armor_INDICES_IBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, armor_POSITION[0],
                                armor_POSITION[1], 
                                armor_POSITION[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    armor_ROTATION[0],
                                armor_ROTATION[1], 
                                armor_ROTATION[2], 
                                armor_ROTATION[3]); 
    //--------------------------------------------------------
    LoadIdentity(modelRotationMatrix); 
    //--------------------------------------------------------
    Rotate(modelRotationMatrix,    armor_ROTATION[0],
                                   armor_ROTATION[1], 
                                   armor_ROTATION[2], 
                                   armor_ROTATION[3]); 
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, armor_NORMALMAP); 
    //------------  
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture); 
    //------------  
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, armor_COLORMAP); 
    //--------------  
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_2D, armor_EXP_MASK); 
    //--------------  
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, armor_EMIT_MASK);     
    //--------------  
    glActiveTexture (GL_TEXTURE5);  
    glBindTexture(GL_TEXTURE_2D, armor_SPEC_MASK);     
    //--------------  
    glActiveTexture (GL_TEXTURE6);  
    glBindTexture(GL_TEXTURE_2D, armor_MIX_MASK);    
    //--------------  
    glActiveTexture (GL_TEXTURE7);  
    glBindTexture(GL_TEXTURE_2D, armor_NORMAL_MASK);       
    //--------------  
    glActiveTexture (GL_TEXTURE8);  
    glBindTexture(GL_TEXTURE_2D, stone_Fresnel_TEX);        
    
    
    
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, 24609, GL_UNSIGNED_INT, 0); 
