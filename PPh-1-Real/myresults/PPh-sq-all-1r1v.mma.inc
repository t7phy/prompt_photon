{
(* kinematics *)
IncomingMomenta -> {p1,p2},
OutgoingMomenta -> {pg,px,k},
MomentumConservation -> {pg->-k+p2-px+p1},
KinematicInvariants -> {t,u,tk,uk,s4},
ScalarProductRules -> {
  SP[p2,p1]->-1/2*t-1/2*tk-1/2*s4-1/2*u-1/2*uk,
  SP[p2,px]->-1/2*t,
  SP[k,k]->0,
  SP[p2,p2]->0,
  SP[px,p1]->-1/2*u,
  SP[px,px]->0,
  SP[k,p2]->-1/2*tk,
  SP[k,p1]->-1/2*uk,
  SP[p1,p1]->0,
  SP[k,px]->1/2*s4
},
(* integral families *)
LoopMomenta["tree"] -> {},
Propagators["tree"] -> {
},
PermutationSymmetries["tree"] -> {
},
LoopMomenta["treex12"] -> {},
Propagators["treex12"] -> {
},
PermutationSymmetries["treex12"] -> {
},
LoopMomenta["treex12x34"] -> {},
Propagators["treex12x34"] -> {
},
PermutationSymmetries["treex12x34"] -> {
},
LoopMomenta["treex12x345"] -> {},
Propagators["treex12x345"] -> {
},
PermutationSymmetries["treex12x345"] -> {
},
LoopMomenta["treex12x35"] -> {},
Propagators["treex12x35"] -> {
},
PermutationSymmetries["treex12x35"] -> {
},
LoopMomenta["treex12x354"] -> {},
Propagators["treex12x354"] -> {
},
PermutationSymmetries["treex12x354"] -> {
},
LoopMomenta["treex12x45"] -> {},
Propagators["treex12x45"] -> {
},
PermutationSymmetries["treex12x45"] -> {
},
LoopMomenta["treex123"] -> {},
Propagators["treex123"] -> {
},
PermutationSymmetries["treex123"] -> {
},
LoopMomenta["treex123x45"] -> {},
Propagators["treex123x45"] -> {
},
PermutationSymmetries["treex123x45"] -> {
},
LoopMomenta["treex1234"] -> {},
Propagators["treex1234"] -> {
},
PermutationSymmetries["treex1234"] -> {
},
LoopMomenta["treex12345"] -> {},
Propagators["treex12345"] -> {
},
PermutationSymmetries["treex12345"] -> {
},
LoopMomenta["treex1235"] -> {},
Propagators["treex1235"] -> {
},
PermutationSymmetries["treex1235"] -> {
},
LoopMomenta["treex12354"] -> {},
Propagators["treex12354"] -> {
},
PermutationSymmetries["treex12354"] -> {
},
LoopMomenta["treex124"] -> {},
Propagators["treex124"] -> {
},
PermutationSymmetries["treex124"] -> {
},
LoopMomenta["treex124x35"] -> {},
Propagators["treex124x35"] -> {
},
PermutationSymmetries["treex124x35"] -> {
},
LoopMomenta["treex1243"] -> {},
Propagators["treex1243"] -> {
},
PermutationSymmetries["treex1243"] -> {
},
LoopMomenta["treex12435"] -> {},
Propagators["treex12435"] -> {
},
PermutationSymmetries["treex12435"] -> {
},
LoopMomenta["treex1245"] -> {},
Propagators["treex1245"] -> {
},
PermutationSymmetries["treex1245"] -> {
},
LoopMomenta["treex12453"] -> {},
Propagators["treex12453"] -> {
},
PermutationSymmetries["treex12453"] -> {
},
LoopMomenta["treex125"] -> {},
Propagators["treex125"] -> {
},
PermutationSymmetries["treex125"] -> {
},
LoopMomenta["treex125x34"] -> {},
Propagators["treex125x34"] -> {
},
PermutationSymmetries["treex125x34"] -> {
},
LoopMomenta["treex1253"] -> {},
Propagators["treex1253"] -> {
},
PermutationSymmetries["treex1253"] -> {
},
LoopMomenta["treex12534"] -> {},
Propagators["treex12534"] -> {
},
PermutationSymmetries["treex12534"] -> {
},
LoopMomenta["treex1254"] -> {},
Propagators["treex1254"] -> {
},
PermutationSymmetries["treex1254"] -> {
},
LoopMomenta["treex12543"] -> {},
Propagators["treex12543"] -> {
},
PermutationSymmetries["treex12543"] -> {
},
LoopMomenta["treex13"] -> {},
Propagators["treex13"] -> {
},
PermutationSymmetries["treex13"] -> {
},
LoopMomenta["treex13x24"] -> {},
Propagators["treex13x24"] -> {
},
PermutationSymmetries["treex13x24"] -> {
},
LoopMomenta["treex13x245"] -> {},
Propagators["treex13x245"] -> {
},
PermutationSymmetries["treex13x245"] -> {
},
LoopMomenta["treex13x25"] -> {},
Propagators["treex13x25"] -> {
},
PermutationSymmetries["treex13x25"] -> {
},
LoopMomenta["treex13x254"] -> {},
Propagators["treex13x254"] -> {
},
PermutationSymmetries["treex13x254"] -> {
},
LoopMomenta["treex13x45"] -> {},
Propagators["treex13x45"] -> {
},
PermutationSymmetries["treex13x45"] -> {
},
LoopMomenta["treex132"] -> {},
Propagators["treex132"] -> {
},
PermutationSymmetries["treex132"] -> {
},
LoopMomenta["treex132x45"] -> {},
Propagators["treex132x45"] -> {
},
PermutationSymmetries["treex132x45"] -> {
},
LoopMomenta["treex1324"] -> {},
Propagators["treex1324"] -> {
},
PermutationSymmetries["treex1324"] -> {
},
LoopMomenta["treex13245"] -> {},
Propagators["treex13245"] -> {
},
PermutationSymmetries["treex13245"] -> {
},
LoopMomenta["treex1325"] -> {},
Propagators["treex1325"] -> {
},
PermutationSymmetries["treex1325"] -> {
},
LoopMomenta["treex13254"] -> {},
Propagators["treex13254"] -> {
},
PermutationSymmetries["treex13254"] -> {
},
LoopMomenta["treex134"] -> {},
Propagators["treex134"] -> {
},
PermutationSymmetries["treex134"] -> {
},
LoopMomenta["treex134x25"] -> {},
Propagators["treex134x25"] -> {
},
PermutationSymmetries["treex134x25"] -> {
},
LoopMomenta["treex1342"] -> {},
Propagators["treex1342"] -> {
},
PermutationSymmetries["treex1342"] -> {
},
LoopMomenta["treex13425"] -> {},
Propagators["treex13425"] -> {
},
PermutationSymmetries["treex13425"] -> {
},
LoopMomenta["treex1345"] -> {},
Propagators["treex1345"] -> {
},
PermutationSymmetries["treex1345"] -> {
},
LoopMomenta["treex13452"] -> {},
Propagators["treex13452"] -> {
},
PermutationSymmetries["treex13452"] -> {
},
LoopMomenta["treex135"] -> {},
Propagators["treex135"] -> {
},
PermutationSymmetries["treex135"] -> {
},
LoopMomenta["treex135x24"] -> {},
Propagators["treex135x24"] -> {
},
PermutationSymmetries["treex135x24"] -> {
},
LoopMomenta["treex1352"] -> {},
Propagators["treex1352"] -> {
},
PermutationSymmetries["treex1352"] -> {
},
LoopMomenta["treex13524"] -> {},
Propagators["treex13524"] -> {
},
PermutationSymmetries["treex13524"] -> {
},
LoopMomenta["treex1354"] -> {},
Propagators["treex1354"] -> {
},
PermutationSymmetries["treex1354"] -> {
},
LoopMomenta["treex13542"] -> {},
Propagators["treex13542"] -> {
},
PermutationSymmetries["treex13542"] -> {
},
LoopMomenta["treex14"] -> {},
Propagators["treex14"] -> {
},
PermutationSymmetries["treex14"] -> {
},
LoopMomenta["treex14x23"] -> {},
Propagators["treex14x23"] -> {
},
PermutationSymmetries["treex14x23"] -> {
},
LoopMomenta["treex14x235"] -> {},
Propagators["treex14x235"] -> {
},
PermutationSymmetries["treex14x235"] -> {
},
LoopMomenta["treex14x25"] -> {},
Propagators["treex14x25"] -> {
},
PermutationSymmetries["treex14x25"] -> {
},
LoopMomenta["treex14x253"] -> {},
Propagators["treex14x253"] -> {
},
PermutationSymmetries["treex14x253"] -> {
},
LoopMomenta["treex14x35"] -> {},
Propagators["treex14x35"] -> {
},
PermutationSymmetries["treex14x35"] -> {
},
LoopMomenta["treex142"] -> {},
Propagators["treex142"] -> {
},
PermutationSymmetries["treex142"] -> {
},
LoopMomenta["treex142x35"] -> {},
Propagators["treex142x35"] -> {
},
PermutationSymmetries["treex142x35"] -> {
},
LoopMomenta["treex1423"] -> {},
Propagators["treex1423"] -> {
},
PermutationSymmetries["treex1423"] -> {
},
LoopMomenta["treex14235"] -> {},
Propagators["treex14235"] -> {
},
PermutationSymmetries["treex14235"] -> {
},
LoopMomenta["treex1425"] -> {},
Propagators["treex1425"] -> {
},
PermutationSymmetries["treex1425"] -> {
},
LoopMomenta["treex14253"] -> {},
Propagators["treex14253"] -> {
},
PermutationSymmetries["treex14253"] -> {
},
LoopMomenta["treex143"] -> {},
Propagators["treex143"] -> {
},
PermutationSymmetries["treex143"] -> {
},
LoopMomenta["treex143x25"] -> {},
Propagators["treex143x25"] -> {
},
PermutationSymmetries["treex143x25"] -> {
},
LoopMomenta["treex1432"] -> {},
Propagators["treex1432"] -> {
},
PermutationSymmetries["treex1432"] -> {
},
LoopMomenta["treex14325"] -> {},
Propagators["treex14325"] -> {
},
PermutationSymmetries["treex14325"] -> {
},
LoopMomenta["treex1435"] -> {},
Propagators["treex1435"] -> {
},
PermutationSymmetries["treex1435"] -> {
},
LoopMomenta["treex14352"] -> {},
Propagators["treex14352"] -> {
},
PermutationSymmetries["treex14352"] -> {
},
LoopMomenta["treex145"] -> {},
Propagators["treex145"] -> {
},
PermutationSymmetries["treex145"] -> {
},
LoopMomenta["treex145x23"] -> {},
Propagators["treex145x23"] -> {
},
PermutationSymmetries["treex145x23"] -> {
},
LoopMomenta["treex1452"] -> {},
Propagators["treex1452"] -> {
},
PermutationSymmetries["treex1452"] -> {
},
LoopMomenta["treex14523"] -> {},
Propagators["treex14523"] -> {
},
PermutationSymmetries["treex14523"] -> {
},
LoopMomenta["treex1453"] -> {},
Propagators["treex1453"] -> {
},
PermutationSymmetries["treex1453"] -> {
},
LoopMomenta["treex14532"] -> {},
Propagators["treex14532"] -> {
},
PermutationSymmetries["treex14532"] -> {
},
LoopMomenta["treex15"] -> {},
Propagators["treex15"] -> {
},
PermutationSymmetries["treex15"] -> {
},
LoopMomenta["treex15x23"] -> {},
Propagators["treex15x23"] -> {
},
PermutationSymmetries["treex15x23"] -> {
},
LoopMomenta["treex15x234"] -> {},
Propagators["treex15x234"] -> {
},
PermutationSymmetries["treex15x234"] -> {
},
LoopMomenta["treex15x24"] -> {},
Propagators["treex15x24"] -> {
},
PermutationSymmetries["treex15x24"] -> {
},
LoopMomenta["treex15x243"] -> {},
Propagators["treex15x243"] -> {
},
PermutationSymmetries["treex15x243"] -> {
},
LoopMomenta["treex15x34"] -> {},
Propagators["treex15x34"] -> {
},
PermutationSymmetries["treex15x34"] -> {
},
LoopMomenta["treex152"] -> {},
Propagators["treex152"] -> {
},
PermutationSymmetries["treex152"] -> {
},
LoopMomenta["treex152x34"] -> {},
Propagators["treex152x34"] -> {
},
PermutationSymmetries["treex152x34"] -> {
},
LoopMomenta["treex1523"] -> {},
Propagators["treex1523"] -> {
},
PermutationSymmetries["treex1523"] -> {
},
LoopMomenta["treex15234"] -> {},
Propagators["treex15234"] -> {
},
PermutationSymmetries["treex15234"] -> {
},
LoopMomenta["treex1524"] -> {},
Propagators["treex1524"] -> {
},
PermutationSymmetries["treex1524"] -> {
},
LoopMomenta["treex15243"] -> {},
Propagators["treex15243"] -> {
},
PermutationSymmetries["treex15243"] -> {
},
LoopMomenta["treex153"] -> {},
Propagators["treex153"] -> {
},
PermutationSymmetries["treex153"] -> {
},
LoopMomenta["treex153x24"] -> {},
Propagators["treex153x24"] -> {
},
PermutationSymmetries["treex153x24"] -> {
},
LoopMomenta["treex1532"] -> {},
Propagators["treex1532"] -> {
},
PermutationSymmetries["treex1532"] -> {
},
LoopMomenta["treex15324"] -> {},
Propagators["treex15324"] -> {
},
PermutationSymmetries["treex15324"] -> {
},
LoopMomenta["treex1534"] -> {},
Propagators["treex1534"] -> {
},
PermutationSymmetries["treex1534"] -> {
},
LoopMomenta["treex15342"] -> {},
Propagators["treex15342"] -> {
},
PermutationSymmetries["treex15342"] -> {
},
LoopMomenta["treex154"] -> {},
Propagators["treex154"] -> {
},
PermutationSymmetries["treex154"] -> {
},
LoopMomenta["treex154x23"] -> {},
Propagators["treex154x23"] -> {
},
PermutationSymmetries["treex154x23"] -> {
},
LoopMomenta["treex1542"] -> {},
Propagators["treex1542"] -> {
},
PermutationSymmetries["treex1542"] -> {
},
LoopMomenta["treex15423"] -> {},
Propagators["treex15423"] -> {
},
PermutationSymmetries["treex15423"] -> {
},
LoopMomenta["treex1543"] -> {},
Propagators["treex1543"] -> {
},
PermutationSymmetries["treex1543"] -> {
},
LoopMomenta["treex15432"] -> {},
Propagators["treex15432"] -> {
},
PermutationSymmetries["treex15432"] -> {
},
LoopMomenta["treex23"] -> {},
Propagators["treex23"] -> {
},
PermutationSymmetries["treex23"] -> {
},
LoopMomenta["treex23x45"] -> {},
Propagators["treex23x45"] -> {
},
PermutationSymmetries["treex23x45"] -> {
},
LoopMomenta["treex234"] -> {},
Propagators["treex234"] -> {
},
PermutationSymmetries["treex234"] -> {
},
LoopMomenta["treex2345"] -> {},
Propagators["treex2345"] -> {
},
PermutationSymmetries["treex2345"] -> {
},
LoopMomenta["treex235"] -> {},
Propagators["treex235"] -> {
},
PermutationSymmetries["treex235"] -> {
},
LoopMomenta["treex2354"] -> {},
Propagators["treex2354"] -> {
},
PermutationSymmetries["treex2354"] -> {
},
LoopMomenta["treex24"] -> {},
Propagators["treex24"] -> {
},
PermutationSymmetries["treex24"] -> {
},
LoopMomenta["treex24x35"] -> {},
Propagators["treex24x35"] -> {
},
PermutationSymmetries["treex24x35"] -> {
},
LoopMomenta["treex243"] -> {},
Propagators["treex243"] -> {
},
PermutationSymmetries["treex243"] -> {
},
LoopMomenta["treex2435"] -> {},
Propagators["treex2435"] -> {
},
PermutationSymmetries["treex2435"] -> {
},
LoopMomenta["treex245"] -> {},
Propagators["treex245"] -> {
},
PermutationSymmetries["treex245"] -> {
},
LoopMomenta["treex2453"] -> {},
Propagators["treex2453"] -> {
},
PermutationSymmetries["treex2453"] -> {
},
LoopMomenta["treex25"] -> {},
Propagators["treex25"] -> {
},
PermutationSymmetries["treex25"] -> {
},
LoopMomenta["treex25x34"] -> {},
Propagators["treex25x34"] -> {
},
PermutationSymmetries["treex25x34"] -> {
},
LoopMomenta["treex253"] -> {},
Propagators["treex253"] -> {
},
PermutationSymmetries["treex253"] -> {
},
LoopMomenta["treex2534"] -> {},
Propagators["treex2534"] -> {
},
PermutationSymmetries["treex2534"] -> {
},
LoopMomenta["treex254"] -> {},
Propagators["treex254"] -> {
},
PermutationSymmetries["treex254"] -> {
},
LoopMomenta["treex2543"] -> {},
Propagators["treex2543"] -> {
},
PermutationSymmetries["treex2543"] -> {
},
LoopMomenta["treex34"] -> {},
Propagators["treex34"] -> {
},
PermutationSymmetries["treex34"] -> {
},
LoopMomenta["treex345"] -> {},
Propagators["treex345"] -> {
},
PermutationSymmetries["treex345"] -> {
},
LoopMomenta["treex35"] -> {},
Propagators["treex35"] -> {
},
PermutationSymmetries["treex35"] -> {
},
LoopMomenta["treex354"] -> {},
Propagators["treex354"] -> {
},
PermutationSymmetries["treex354"] -> {
},
LoopMomenta["treex45"] -> {},
Propagators["treex45"] -> {
},
PermutationSymmetries["treex45"] -> {
},
LoopMomenta["pentagon"] -> {l},
Propagators["pentagon"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagon"] -> {
},
LoopMomenta["pentagonx12"] -> {l},
Propagators["pentagonx12"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx12"] -> {
},
LoopMomenta["pentagonx12x34"] -> {l},
Propagators["pentagonx12x34"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx12x34"] -> {
},
LoopMomenta["pentagonx12x345"] -> {l},
Propagators["pentagonx12x345"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx12x345"] -> {
},
LoopMomenta["pentagonx12x35"] -> {l},
Propagators["pentagonx12x35"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx12x35"] -> {
},
LoopMomenta["pentagonx12x354"] -> {l},
Propagators["pentagonx12x354"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx12x354"] -> {
},
LoopMomenta["pentagonx12x45"] -> {l},
Propagators["pentagonx12x45"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx12x45"] -> {
},
LoopMomenta["pentagonx123"] -> {l},
Propagators["pentagonx123"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx123"] -> {
},
LoopMomenta["pentagonx123x45"] -> {l},
Propagators["pentagonx123x45"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx123x45"] -> {
},
LoopMomenta["pentagonx1234"] -> {l},
Propagators["pentagonx1234"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx1234"] -> {
},
LoopMomenta["pentagonx12345"] -> {l},
Propagators["pentagonx12345"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx12345"] -> {
},
LoopMomenta["pentagonx1235"] -> {l},
Propagators["pentagonx1235"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx1235"] -> {
},
LoopMomenta["pentagonx12354"] -> {l},
Propagators["pentagonx12354"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx12354"] -> {
},
LoopMomenta["pentagonx124"] -> {l},
Propagators["pentagonx124"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx124"] -> {
},
LoopMomenta["pentagonx124x35"] -> {l},
Propagators["pentagonx124x35"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx124x35"] -> {
},
LoopMomenta["pentagonx1243"] -> {l},
Propagators["pentagonx1243"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx1243"] -> {
},
LoopMomenta["pentagonx12435"] -> {l},
Propagators["pentagonx12435"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx12435"] -> {
},
LoopMomenta["pentagonx1245"] -> {l},
Propagators["pentagonx1245"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx1245"] -> {
},
LoopMomenta["pentagonx12453"] -> {l},
Propagators["pentagonx12453"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx12453"] -> {
},
LoopMomenta["pentagonx125"] -> {l},
Propagators["pentagonx125"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx125"] -> {
},
LoopMomenta["pentagonx125x34"] -> {l},
Propagators["pentagonx125x34"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx125x34"] -> {
},
LoopMomenta["pentagonx1253"] -> {l},
Propagators["pentagonx1253"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx1253"] -> {
},
LoopMomenta["pentagonx12534"] -> {l},
Propagators["pentagonx12534"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx12534"] -> {
},
LoopMomenta["pentagonx1254"] -> {l},
Propagators["pentagonx1254"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx1254"] -> {
},
LoopMomenta["pentagonx12543"] -> {l},
Propagators["pentagonx12543"] -> {
  Prop[l,0] (*1*),
  Prop[p2+l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx12543"] -> {
},
LoopMomenta["pentagonx13"] -> {l},
Propagators["pentagonx13"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx13"] -> {
},
LoopMomenta["pentagonx13x24"] -> {l},
Propagators["pentagonx13x24"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx13x24"] -> {
},
LoopMomenta["pentagonx13x245"] -> {l},
Propagators["pentagonx13x245"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx13x245"] -> {
},
LoopMomenta["pentagonx13x25"] -> {l},
Propagators["pentagonx13x25"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx13x25"] -> {
},
LoopMomenta["pentagonx13x254"] -> {l},
Propagators["pentagonx13x254"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx13x254"] -> {
},
LoopMomenta["pentagonx13x45"] -> {l},
Propagators["pentagonx13x45"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx13x45"] -> {
},
LoopMomenta["pentagonx132"] -> {l},
Propagators["pentagonx132"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx132"] -> {
},
LoopMomenta["pentagonx132x45"] -> {l},
Propagators["pentagonx132x45"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx132x45"] -> {
},
LoopMomenta["pentagonx1324"] -> {l},
Propagators["pentagonx1324"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx1324"] -> {
},
LoopMomenta["pentagonx13245"] -> {l},
Propagators["pentagonx13245"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx13245"] -> {
},
LoopMomenta["pentagonx1325"] -> {l},
Propagators["pentagonx1325"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx1325"] -> {
},
LoopMomenta["pentagonx13254"] -> {l},
Propagators["pentagonx13254"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx13254"] -> {
},
LoopMomenta["pentagonx134"] -> {l},
Propagators["pentagonx134"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx134"] -> {
},
LoopMomenta["pentagonx134x25"] -> {l},
Propagators["pentagonx134x25"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx134x25"] -> {
},
LoopMomenta["pentagonx1342"] -> {l},
Propagators["pentagonx1342"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx1342"] -> {
},
LoopMomenta["pentagonx13425"] -> {l},
Propagators["pentagonx13425"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx13425"] -> {
},
LoopMomenta["pentagonx1345"] -> {l},
Propagators["pentagonx1345"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx1345"] -> {
},
LoopMomenta["pentagonx13452"] -> {l},
Propagators["pentagonx13452"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx13452"] -> {
},
LoopMomenta["pentagonx135"] -> {l},
Propagators["pentagonx135"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx135"] -> {
},
LoopMomenta["pentagonx135x24"] -> {l},
Propagators["pentagonx135x24"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx135x24"] -> {
},
LoopMomenta["pentagonx1352"] -> {l},
Propagators["pentagonx1352"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx1352"] -> {
},
LoopMomenta["pentagonx13524"] -> {l},
Propagators["pentagonx13524"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k+px+l-p1,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx13524"] -> {
},
LoopMomenta["pentagonx1354"] -> {l},
Propagators["pentagonx1354"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx1354"] -> {
},
LoopMomenta["pentagonx13542"] -> {l},
Propagators["pentagonx13542"] -> {
  Prop[l,0] (*1*),
  Prop[k-p2+px+l-p1,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx13542"] -> {
},
LoopMomenta["pentagonx14"] -> {l},
Propagators["pentagonx14"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx14"] -> {
},
LoopMomenta["pentagonx14x23"] -> {l},
Propagators["pentagonx14x23"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx14x23"] -> {
},
LoopMomenta["pentagonx14x235"] -> {l},
Propagators["pentagonx14x235"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx14x235"] -> {
},
LoopMomenta["pentagonx14x25"] -> {l},
Propagators["pentagonx14x25"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx14x25"] -> {
},
LoopMomenta["pentagonx14x253"] -> {l},
Propagators["pentagonx14x253"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx14x253"] -> {
},
LoopMomenta["pentagonx14x35"] -> {l},
Propagators["pentagonx14x35"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx14x35"] -> {
},
LoopMomenta["pentagonx142"] -> {l},
Propagators["pentagonx142"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx142"] -> {
},
LoopMomenta["pentagonx142x35"] -> {l},
Propagators["pentagonx142x35"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx142x35"] -> {
},
LoopMomenta["pentagonx1423"] -> {l},
Propagators["pentagonx1423"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx1423"] -> {
},
LoopMomenta["pentagonx14235"] -> {l},
Propagators["pentagonx14235"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx14235"] -> {
},
LoopMomenta["pentagonx1425"] -> {l},
Propagators["pentagonx1425"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx1425"] -> {
},
LoopMomenta["pentagonx14253"] -> {l},
Propagators["pentagonx14253"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx14253"] -> {
},
LoopMomenta["pentagonx143"] -> {l},
Propagators["pentagonx143"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx143"] -> {
},
LoopMomenta["pentagonx143x25"] -> {l},
Propagators["pentagonx143x25"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx143x25"] -> {
},
LoopMomenta["pentagonx1432"] -> {l},
Propagators["pentagonx1432"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx1432"] -> {
},
LoopMomenta["pentagonx14325"] -> {l},
Propagators["pentagonx14325"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx14325"] -> {
},
LoopMomenta["pentagonx1435"] -> {l},
Propagators["pentagonx1435"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx1435"] -> {
},
LoopMomenta["pentagonx14352"] -> {l},
Propagators["pentagonx14352"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[k+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx14352"] -> {
},
LoopMomenta["pentagonx145"] -> {l},
Propagators["pentagonx145"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx145"] -> {
},
LoopMomenta["pentagonx145x23"] -> {l},
Propagators["pentagonx145x23"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx145x23"] -> {
},
LoopMomenta["pentagonx1452"] -> {l},
Propagators["pentagonx1452"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx1452"] -> {
},
LoopMomenta["pentagonx14523"] -> {l},
Propagators["pentagonx14523"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[p2-px+l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx14523"] -> {
},
LoopMomenta["pentagonx1453"] -> {l},
Propagators["pentagonx1453"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx1453"] -> {
},
LoopMomenta["pentagonx14532"] -> {l},
Propagators["pentagonx14532"] -> {
  Prop[l,0] (*1*),
  Prop[px-l,0] (*2*),
  Prop[k-p2+l-p1,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx14532"] -> {
},
LoopMomenta["pentagonx15"] -> {l},
Propagators["pentagonx15"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx15"] -> {
},
LoopMomenta["pentagonx15x23"] -> {l},
Propagators["pentagonx15x23"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx15x23"] -> {
},
LoopMomenta["pentagonx15x234"] -> {l},
Propagators["pentagonx15x234"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx15x234"] -> {
},
LoopMomenta["pentagonx15x24"] -> {l},
Propagators["pentagonx15x24"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx15x24"] -> {
},
LoopMomenta["pentagonx15x243"] -> {l},
Propagators["pentagonx15x243"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx15x243"] -> {
},
LoopMomenta["pentagonx15x34"] -> {l},
Propagators["pentagonx15x34"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx15x34"] -> {
},
LoopMomenta["pentagonx152"] -> {l},
Propagators["pentagonx152"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx152"] -> {
},
LoopMomenta["pentagonx152x34"] -> {l},
Propagators["pentagonx152x34"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx152x34"] -> {
},
LoopMomenta["pentagonx1523"] -> {l},
Propagators["pentagonx1523"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx1523"] -> {
},
LoopMomenta["pentagonx15234"] -> {l},
Propagators["pentagonx15234"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx15234"] -> {
},
LoopMomenta["pentagonx1524"] -> {l},
Propagators["pentagonx1524"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx1524"] -> {
},
LoopMomenta["pentagonx15243"] -> {l},
Propagators["pentagonx15243"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[-k+p2+l,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx15243"] -> {
},
LoopMomenta["pentagonx153"] -> {l},
Propagators["pentagonx153"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx153"] -> {
},
LoopMomenta["pentagonx153x24"] -> {l},
Propagators["pentagonx153x24"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx153x24"] -> {
},
LoopMomenta["pentagonx1532"] -> {l},
Propagators["pentagonx1532"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx1532"] -> {
},
LoopMomenta["pentagonx15324"] -> {l},
Propagators["pentagonx15324"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx15324"] -> {
},
LoopMomenta["pentagonx1534"] -> {l},
Propagators["pentagonx1534"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx1534"] -> {
},
LoopMomenta["pentagonx15342"] -> {l},
Propagators["pentagonx15342"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[p2-px-l+p1,0] (*3*),
  Prop[px+l-p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx15342"] -> {
},
LoopMomenta["pentagonx154"] -> {l},
Propagators["pentagonx154"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx154"] -> {
},
LoopMomenta["pentagonx154x23"] -> {l},
Propagators["pentagonx154x23"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx154x23"] -> {
},
LoopMomenta["pentagonx1542"] -> {l},
Propagators["pentagonx1542"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx1542"] -> {
},
LoopMomenta["pentagonx15423"] -> {l},
Propagators["pentagonx15423"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[k-p2+px-l,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx15423"] -> {
},
LoopMomenta["pentagonx1543"] -> {l},
Propagators["pentagonx1543"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx1543"] -> {
},
LoopMomenta["pentagonx15432"] -> {l},
Propagators["pentagonx15432"] -> {
  Prop[l,0] (*1*),
  Prop[k-l,0] (*2*),
  Prop[k+px-l,0] (*3*),
  Prop[p2-l+p1,0] (*4*),
  Prop[l-p1,0] (*5*)
},
PermutationSymmetries["pentagonx15432"] -> {
},
LoopMomenta["pentagonx23"] -> {l},
Propagators["pentagonx23"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx23"] -> {
},
LoopMomenta["pentagonx23x45"] -> {l},
Propagators["pentagonx23x45"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx23x45"] -> {
},
LoopMomenta["pentagonx234"] -> {l},
Propagators["pentagonx234"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx234"] -> {
},
LoopMomenta["pentagonx2345"] -> {l},
Propagators["pentagonx2345"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx2345"] -> {
},
LoopMomenta["pentagonx235"] -> {l},
Propagators["pentagonx235"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx235"] -> {
},
LoopMomenta["pentagonx2354"] -> {l},
Propagators["pentagonx2354"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[-k+p2-px+l+p1,0] (*5*)
},
PermutationSymmetries["pentagonx2354"] -> {
},
LoopMomenta["pentagonx24"] -> {l},
Propagators["pentagonx24"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx24"] -> {
},
LoopMomenta["pentagonx24x35"] -> {l},
Propagators["pentagonx24x35"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx24x35"] -> {
},
LoopMomenta["pentagonx243"] -> {l},
Propagators["pentagonx243"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx243"] -> {
},
LoopMomenta["pentagonx2435"] -> {l},
Propagators["pentagonx2435"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx2435"] -> {
},
LoopMomenta["pentagonx245"] -> {l},
Propagators["pentagonx245"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[-k+p2+l+p1,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx245"] -> {
},
LoopMomenta["pentagonx2453"] -> {l},
Propagators["pentagonx2453"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[px+l,0] (*5*)
},
PermutationSymmetries["pentagonx2453"] -> {
},
LoopMomenta["pentagonx25"] -> {l},
Propagators["pentagonx25"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx25"] -> {
},
LoopMomenta["pentagonx25x34"] -> {l},
Propagators["pentagonx25x34"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[p2+l+p1,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx25x34"] -> {
},
LoopMomenta["pentagonx253"] -> {l},
Propagators["pentagonx253"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx253"] -> {
},
LoopMomenta["pentagonx2534"] -> {l},
Propagators["pentagonx2534"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[k+px+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx2534"] -> {
},
LoopMomenta["pentagonx254"] -> {l},
Propagators["pentagonx254"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[p2-px+l+p1,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx254"] -> {
},
LoopMomenta["pentagonx2543"] -> {l},
Propagators["pentagonx2543"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[k+l,0] (*5*)
},
PermutationSymmetries["pentagonx2543"] -> {
},
LoopMomenta["pentagonx34"] -> {l},
Propagators["pentagonx34"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-k+l+p1,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx34"] -> {
},
LoopMomenta["pentagonx345"] -> {l},
Propagators["pentagonx345"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[-p2+px+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx345"] -> {
},
LoopMomenta["pentagonx35"] -> {l},
Propagators["pentagonx35"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[k-p2+px+l,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx35"] -> {
},
LoopMomenta["pentagonx354"] -> {l},
Propagators["pentagonx354"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[k-p2+l,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx354"] -> {
},
LoopMomenta["pentagonx45"] -> {l},
Propagators["pentagonx45"] -> {
  Prop[l,0] (*1*),
  Prop[l+p1,0] (*2*),
  Prop[-px+l+p1,0] (*3*),
  Prop[k+px-l-p1,0] (*4*),
  Prop[p2-l,0] (*5*)
},
PermutationSymmetries["pentagonx45"] -> {
},
ReduzeVersion -> "2.6"
}
