setupTransforms_MainColor();
    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, body_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, body_INDICES_IBO);  
    //--------------------------------
    LoadIdentity(modelWorldMatrix); 
    //--------------------------------------------------------
    Translate(modelWorldMatrix, body_POSITION[0],
                                body_POSITION[1], 
                                body_POSITION[2]); 
    //--------------------------------------------------------
    Rotate(modelWorldMatrix,    body_ROTATION[0],
                                body_ROTATION[1], 
                                body_ROTATION[2], 
                                body_ROTATION[3]); 
    //--------------------------------------------------------
    LoadIdentity(modelRotationMatrix); 
    //--------------------------------------------------------
    Rotate(modelRotationMatrix,    body_ROTATION[0],
                                   body_ROTATION[1], 
                                   body_ROTATION[2], 
                                   body_ROTATION[3]); 
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, body_NORMALMAP); 
    //------------  
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture); 
    //------------  
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, body_COLORMAP); 
    //--------------  
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_2D, body_EXP_MASK); 
    //--------------  
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, body_EMIT_MASK);     
    //--------------  
    glActiveTexture (GL_TEXTURE5);  
    glBindTexture(GL_TEXTURE_2D, body_SPEC_MASK);     
    //--------------  
    glActiveTexture (GL_TEXTURE6);  
    glBindTexture(GL_TEXTURE_2D, body_MIX_MASK);    
    //--------------  
    glActiveTexture (GL_TEXTURE7);  
    glBindTexture(GL_TEXTURE_2D, body_NORMAL_MASK);       
    //--------------  
    glActiveTexture (GL_TEXTURE8);  
    glBindTexture(GL_TEXTURE_2D, stone_Fresnel_TEX);        
    
 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, 6591, GL_UNSIGNED_INT, 0); 
