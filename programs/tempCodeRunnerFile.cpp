if(revleft > right){
        return left+revleft;
    }
    else{
        K[mid]=K[mid]+1;
        return left+K[mid]+revleft;
    }