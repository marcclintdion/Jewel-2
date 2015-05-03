setupTransforms_Shadows();
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
    SelectShader(shaderNumber); 
    //--------------------------------------------------------
    glDrawElements(GL_TRIANGLES, 24609, GL_UNSIGNED_INT, 0); 
