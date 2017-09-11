//Popup with form

$(document).ready(function() {
	$('.form-item form-type-radios form-item-text-body').magnificPopup({
		type: 'block',
		preloader: false,
		focus: '#name',

		// When elemened is focused, some mobile browsers in some cases zoom in
		// It looks not nice, so we disable it:
		callbacks: {
			beforeOpen: function() {
				if($(window).width() < 700) {
					this.st.focus = false;
				} else {
					this.st.focus = '#name';
				}
			}
		}
	});
});

<!-- link that opens popup -->
<a class="popup-with-form" href="/sites/all/modules/custom/review">Please review</a>

/* <!-- form itself -->
<form id="test-form" class="white-popup-block mfp-hide">
	<h1>Form</h1>
	<fieldset style="border:0;">
		<p>Lightbox has an option to automatically focus on the first input. It's strongly recommended to use <code>inline</code> popup type for lightboxes with form instead of <code>ajax</code> (to keep entered data if the user accidentally refreshed the page).</p>
		<ol>
			<li>
				<label for="name">Name</label>
				<input id="name" name="name" placeholder="Name" required="" type="text">
			</li>
			<li>
				<label for="email">Email</label>
				<input id="email" name="email" placeholder="example@domain.com" required="" type="email">
			</li>
			<li>
				<label for="phone">Phone</label>
				<input id="phone" name="phone" placeholder="Eg. +447500000000" required="" type="tel">
			</li>
			<li>
				<label for="textarea">Textarea</label><br>
				<textarea id="textarea">Try to resize me to see how popup CSS-based resizing works.</textarea>
			</li>
		</ol>
	</fieldset>
</form>


 */