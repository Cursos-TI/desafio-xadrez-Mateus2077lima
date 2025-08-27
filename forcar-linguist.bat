@echo off
echo ========= Forçando atualização do Linguist no GitHub =========

:: Cria um commit vazio (sem alterar arquivos)
git commit --allow-empty -m "Forçando Linguist recalcular linguagens"

:: Envia para o repositório remoto
git push origin main

echo ========= Pronto! Agora é só aguardar alguns minutos e o GitHub vai atualizar =========
pause
