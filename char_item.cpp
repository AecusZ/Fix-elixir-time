//Cauta

									if (CArenaManager::instance().IsArenaMap(GetMapIndex()) == true)
									{
										ChatPacket(CHAT_TYPE_INFO, LC_TEXT("´ë·ĂŔĺżˇĽ­ »çżëÇĎ˝Ç Ľö ľř˝Ŕ´Ď´Ů."));
										return false;
									}

									EAffectTypes type = AFFECT_NONE;

//Adauga dupa

#ifdef ENABLE_FIX_ELIXIR_TIMER
								{
									quest::CQuestManager& q = quest::CQuestManager::instance();
									quest::PC* pPC = q.GetPC(GetPlayerID());
								
									if (pPC != NULL)
									{
										int last_use_time = pPC->GetFlag("auto_recovery.last_use_time");
     
                    if (get_global_time() - last_use_time < 3)
										{
											ChatPacket(CHAT_TYPE_INFO, "Poti folosi elixirul in %d secunde.", 3 - (get_global_time() - last_use_time));
											return false;
										}
								
										pPC->SetFlag("auto_recovery.last_use_time", get_global_time());
									}
								}
#endif







last_use_time < 3) - timp-ul de asteptare
