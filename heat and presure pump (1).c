install-comparison-constraits
 (rule ( show (iff ?a ?b )) ;; bicondditional introduction
	(assert! '(show (implies ,?a,?b)))
	(assert!'(show (implies ,?b,?a)))
	(rule (implies?b ?a)
 (assert!'(iff ,?a,?b))))
 ((iff pq)
	(implies pq) (bei)
	(implies qp) (bei)

(defprocess (heat-flow ?src ?path ?dst)
 ;indivuals ((?src (quantity (heat ?scr)))
 (?path (heat-connection ?path ?src ?dst))
 (?dst (quantity (heat ?dst)))
 :preconditions((heat-aligned ?path))
 :quantity-conditions((> (a (temperature ?src))
                         (a (temperature ?dst))))
 :relations ((quantity flow rate ?self))
 (> (a (flow-rate ?self)) zero)
 (qprop (flow-rate ?self) temperture ?src))
 (qprop- (flow-rate ?self) temperture ?dst)))
 :influences ((i-heat ?scr) (flow-rate ?self))
              (i+heat ?dst) (flow-rate ?self)))

(:iff (:or (:not (quantity (pressure a)))
	   (:not (quantity (pressure b)))
	and (:not ((- (pressure a)) <=(- (pressure b))))
	    (:not ((+ (pressure b)) <=(+ (pressure a))))
end