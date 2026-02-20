<!DOCTYPE html>
<html lang="en-US" data-theme="gitea-dark">
<head>
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>WonderfulOpenXOperatingSystem/buildenv/Dockerfile at 4559b9988a20bc8066cdb82af480ca0245f77857 - WonderfulOpenXOperatingSystem - tildegit</title>
	<link rel="manifest" href="data:application/json;base64,eyJuYW1lIjoidGlsZGVnaXQiLCJzaG9ydF9uYW1lIjoidGlsZGVnaXQiLCJzdGFydF91cmwiOiJodHRwczovL3RpbGRlZ2l0Lm9yZy8iLCJpY29ucyI6W3sic3JjIjoiaHR0cHM6Ly90aWxkZWdpdC5vcmcvXy9zdGF0aWMvYXNzZXRzL2ltZy9sb2dvLnBuZyIsInR5cGUiOiJpbWFnZS9wbmciLCJzaXplcyI6IjUxMng1MTIifSx7InNyYyI6Imh0dHBzOi8vdGlsZGVnaXQub3JnL18vc3RhdGljL2Fzc2V0cy9pbWcvbG9nby5zdmciLCJ0eXBlIjoiaW1hZ2Uvc3ZnK3htbCIsInNpemVzIjoiNTEyeDUxMiJ9XX0=">
	<meta name="author" content="bogroll1234">
	<meta name="description" content="WonderfulOpenXOperatingSystem - Source code of WOXOS.">
	<meta name="keywords" content="git,self-hosted,gitea,tilde,tildeverse">
	<meta name="referrer" content="no-referrer">


	<link rel="alternate" type="application/atom+xml" title="" href="/bogroll1234/WonderfulOpenXOperatingSystem.atom">
	<link rel="alternate" type="application/rss+xml" title="" href="/bogroll1234/WonderfulOpenXOperatingSystem.rss">

	<link rel="icon" href="/_/static/assets/img/favicon.svg" type="image/svg+xml">
	<link rel="alternate icon" href="/_/static/assets/img/favicon.png" type="image/png">
	
	
		<meta property="og:title" content="WonderfulOpenXOperatingSystem/buildenv/Dockerfile at 4559b9988a20bc8066cdb82af480ca0245f77857">
		<meta property="og:url" content="https://tildegit.org//bogroll1234/WonderfulOpenXOperatingSystem/src/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile">
		
	
	<meta property="og:type" content="object">
	
		<meta property="og:image" content="https://secure.gravatar.com/avatar/e5f432efcff9faba65d37dc8fd63129b?d=identicon">
	

<meta property="og:site_name" content="tildegit">

	<link rel="stylesheet" href="/_/static/assets/css/index.css?v=1.25.2">
<link rel="stylesheet" href="/_/static/assets/css/theme-gitea-dark.css?v=1.25.2">

	
<script>
	
	window.addEventListener('error', function(e) {window._globalHandlerErrors=window._globalHandlerErrors||[]; window._globalHandlerErrors.push(e);});
	window.addEventListener('unhandledrejection', function(e) {window._globalHandlerErrors=window._globalHandlerErrors||[]; window._globalHandlerErrors.push(e);});
	window.config = {
		appUrl: 'https:\/\/tildegit.org\/',
		appSubUrl: '',
		assetVersionEncoded: encodeURIComponent('1.25.2'), 
		assetUrlPrefix: '\/_\/static\/assets',
		runModeIsProd:  true ,
		customEmojis: {"codeberg":":codeberg:","git":":git:","gitea":":gitea:","github":":github:","gitlab":":gitlab:","gogs":":gogs:"},
		csrfToken: '4gMmgEcZowRLeUibFfdHNIjvPNY6MTc3MTYwMDk5MzAxNjk5MzYyNw',
		pageData: {},
		notificationSettings: {"EventSourceUpdateTime":10000,"MaxTimeout":60000,"MinTimeout":10000,"TimeoutStep":10000}, 
		enableTimeTracking:  true ,
		
		mermaidMaxSourceCharacters:  50000 ,
		
		i18n: {
			copy_success: "Copied!",
			copy_error: "Copy failed",
			error_occurred: "An error occurred",
			remove_label_str: "Remove item \"%s\"",
			modal_confirm: "Confirm",
			modal_cancel: "Cancel",
			more_items: "More items",
		},
	};
	
	window.config.pageData = window.config.pageData || {};
</script>
<script src="/_/static/assets/js/index.js?v=1.25.2" onerror="alert('Failed to load asset files from ' + this.src + '. Please make sure the asset files can be accessed.')"></script>

	
</head>
<body hx-headers='{"x-csrf-token": "4gMmgEcZowRLeUibFfdHNIjvPNY6MTc3MTYwMDk5MzAxNjk5MzYyNw"}' hx-swap="outerHTML" hx-ext="morph" hx-push-url="false">
	

	<div class="full height">
		<noscript>This website requires JavaScript.</noscript>

		

		
			<nav id="navbar" aria-label="Navigation Bar">
	<div class="navbar-left">
		
		<a class="item" id="navbar-logo" href="/" aria-label="Home">
			<img width="30" height="30" src="/_/static/assets/img/logo.svg" alt="Logo" aria-hidden="true">
		</a>

		
		<div class="ui secondary menu navbar-mobile-right only-mobile">
			

			<button class="item ui icon mini button tw-m-0" id="navbar-expand-toggle" aria-label="Navigation Menu"><svg viewBox="0 0 16 16" class="svg octicon-three-bars" aria-hidden="true" width="16" height="16"><path d="M1 2.75A.75.75 0 0 1 1.75 2h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 2.75m0 5A.75.75 0 0 1 1.75 7h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 7.75M1.75 12h12.5a.75.75 0 0 1 0 1.5H1.75a.75.75 0 0 1 0-1.5"/></svg></button>
		</div>

		
		
			<a class="item" href="/explore/repos">Explore</a>
		

		<a class="item" href="https://drone.tildegit.org/bogroll1234/WonderfulOpenXOperatingSystem">Drone CI</a>


		
			<a class="item" target="_blank" rel="noopener noreferrer" href="https://docs.gitea.com">Help</a>
		
	</div>

	
	<div class="navbar-right">
		
			
				<a class="item" href="/user/sign_up">
					<svg viewBox="0 0 16 16" class="svg octicon-person" aria-hidden="true" width="16" height="16"><path d="M10.561 8.073a6 6 0 0 1 3.432 5.142.75.75 0 1 1-1.498.07 4.5 4.5 0 0 0-8.99 0 .75.75 0 0 1-1.498-.07 6 6 0 0 1 3.431-5.142 3.999 3.999 0 1 1 5.123 0M10.5 5a2.5 2.5 0 1 0-5 0 2.5 2.5 0 0 0 5 0"/></svg>
					<span class="tw-ml-1">Register</span>
				</a>
			
			<a class="item" rel="nofollow" href="/user/login?redirect_to=%2fbogroll1234%2fWonderfulOpenXOperatingSystem%2fsrc%2fcommit%2f4559b9988a20bc8066cdb82af480ca0245f77857%2fbuildenv%2fDockerfile">
				<svg viewBox="0 0 16 16" class="svg octicon-sign-in" aria-hidden="true" width="16" height="16"><path d="M2 2.75C2 1.784 2.784 1 3.75 1h2.5a.75.75 0 0 1 0 1.5h-2.5a.25.25 0 0 0-.25.25v10.5c0 .138.112.25.25.25h2.5a.75.75 0 0 1 0 1.5h-2.5A1.75 1.75 0 0 1 2 13.25Zm6.56 4.5h5.69a.75.75 0 0 1 0 1.5H8.56l1.97 1.97a.749.749 0 0 1-.326 1.275.75.75 0 0 1-.734-.215L6.22 8.53a.75.75 0 0 1 0-1.06l3.25-3.25a.749.749 0 0 1 1.275.326.75.75 0 0 1-.215.734Z"/></svg>
				<span class="tw-ml-1">Sign In</span>
			</a>
		
	</div>

	
	
</nav>

		



<div role="main" aria-label="WonderfulOpenXOperatingSystem/buildenv/Dockerfile at 4559b9988a20bc8066cdb82af480ca0245f77857" class="page-content repository file list ">
	<div class="secondary-nav">

	<div class="ui container">
		<div class="repo-header">
			<div class="flex-item tw-items-center">
				<div class="flex-item-leading">
					

	<svg viewBox="0 0 16 16" class="svg octicon-repo" aria-hidden="true" width="24" height="24"><path d="M2 2.5A2.5 2.5 0 0 1 4.5 0h8.75a.75.75 0 0 1 .75.75v12.5a.75.75 0 0 1-.75.75h-2.5a.75.75 0 0 1 0-1.5h1.75v-2h-8a1 1 0 0 0-.714 1.7.75.75 0 1 1-1.072 1.05A2.5 2.5 0 0 1 2 11.5Zm10.5-1h-8a1 1 0 0 0-1 1v6.708A2.5 2.5 0 0 1 4.5 9h8ZM5 12.25a.25.25 0 0 1 .25-.25h3.5a.25.25 0 0 1 .25.25v3.25a.25.25 0 0 1-.4.2l-1.45-1.087a.25.25 0 0 0-.3 0L5.4 15.7a.25.25 0 0 1-.4-.2Z"/></svg>


				</div>
				<div class="flex-item-main">
					<div class="flex-item-title tw-text-18">
						<a class="muted tw-font-normal" href="/bogroll1234">bogroll1234</a>/<a class="muted" href="/bogroll1234/WonderfulOpenXOperatingSystem">WonderfulOpenXOperatingSystem</a>
					</div>
				</div>
				<div class="flex-item-trailing">
					
					
						
					
					
					
					
				</div>
			</div>
			
				<div class="flex-text-block tw-flex-wrap">
					
					
					
					<a class="ui compact small basic button" href="/bogroll1234/WonderfulOpenXOperatingSystem.rss" data-tooltip-content="RSS Feed">
						<svg viewBox="0 0 16 16" class="svg octicon-rss" aria-hidden="true" width="16" height="16"><path d="M2.002 2.725a.75.75 0 0 1 .797-.699C8.79 2.42 13.58 7.21 13.974 13.201a.75.75 0 0 1-1.497.098 10.5 10.5 0 0 0-9.776-9.776.747.747 0 0 1-.7-.798ZM2.84 7.05h-.002a7 7 0 0 1 6.113 6.111.75.75 0 0 1-1.49.178 5.5 5.5 0 0 0-4.8-4.8.75.75 0 0 1 .179-1.489M2 13a1 1 0 1 1 2 0 1 1 0 0 1-2 0"/></svg>
					</a>
					
					<form class="flex-text-inline" hx-boost="true" hx-target="this" method="post" action="/bogroll1234/WonderfulOpenXOperatingSystem/action/watch">
	<div class="ui labeled button" data-tooltip-content="Sign in to watch this repository.">
		
		
		<button type="submit" class="ui compact small basic button" disabled aria-label="Watch">
			<svg viewBox="0 0 16 16" class="svg octicon-eye" aria-hidden="true" width="16" height="16"><path d="M8 2c1.981 0 3.671.992 4.933 2.078 1.27 1.091 2.187 2.345 2.637 3.023a1.62 1.62 0 0 1 0 1.798c-.45.678-1.367 1.932-2.637 3.023C11.67 13.008 9.981 14 8 14s-3.671-.992-4.933-2.078C1.797 10.83.88 9.576.43 8.898a1.62 1.62 0 0 1 0-1.798c.45-.677 1.367-1.931 2.637-3.022C4.33 2.992 6.019 2 8 2M1.679 7.932a.12.12 0 0 0 0 .136c.411.622 1.241 1.75 2.366 2.717C5.176 11.758 6.527 12.5 8 12.5s2.825-.742 3.955-1.715c1.124-.967 1.954-2.096 2.366-2.717a.12.12 0 0 0 0-.136c-.412-.621-1.242-1.75-2.366-2.717C10.824 4.242 9.473 3.5 8 3.5s-2.825.742-3.955 1.715c-1.124.967-1.954 2.096-2.366 2.717M8 10a2 2 0 1 1-.001-3.999A2 2 0 0 1 8 10"/></svg>
			<span class="not-mobile" aria-hidden="true">Watch</span>
		</button>
		<a hx-boost="false" class="ui basic label" href="/bogroll1234/WonderfulOpenXOperatingSystem/watchers">
			1
		</a>
	</div>
</form>

					
					<form class="flex-text-inline" hx-boost="true" hx-target="this" method="post" action="/bogroll1234/WonderfulOpenXOperatingSystem/action/star">
	<div class="ui labeled button" data-tooltip-content="Sign in to star this repository.">
		
		
		<button type="submit" class="ui compact small basic button" disabled aria-label="Star">
			<svg viewBox="0 0 16 16" class="svg octicon-star" aria-hidden="true" width="16" height="16"><path d="M8 .25a.75.75 0 0 1 .673.418l1.882 3.815 4.21.612a.75.75 0 0 1 .416 1.279l-3.046 2.97.719 4.192a.751.751 0 0 1-1.088.791L8 12.347l-3.766 1.98a.75.75 0 0 1-1.088-.79l.72-4.194L.818 6.374a.75.75 0 0 1 .416-1.28l4.21-.611L7.327.668A.75.75 0 0 1 8 .25m0 2.445L6.615 5.5a.75.75 0 0 1-.564.41l-3.097.45 2.24 2.184a.75.75 0 0 1 .216.664l-.528 3.084 2.769-1.456a.75.75 0 0 1 .698 0l2.77 1.456-.53-3.084a.75.75 0 0 1 .216-.664l2.24-2.183-3.096-.45a.75.75 0 0 1-.564-.41z"/></svg>
			<span class="not-mobile" aria-hidden="true">Star</span>
		</button>
		<a hx-boost="false" class="ui basic label" href="/bogroll1234/WonderfulOpenXOperatingSystem/stars">
			0
		</a>
	</div>
</form>

					
					
						<div class="ui labeled button
							
								disabled
							"
							
								data-tooltip-content="Sign in to fork this repository."
							
						>
							<a class="ui compact small basic button"
								
									
								
							>
								<svg viewBox="0 0 16 16" class="svg octicon-repo-forked" aria-hidden="true" width="16" height="16"><path d="M5 5.372v.878c0 .414.336.75.75.75h4.5a.75.75 0 0 0 .75-.75v-.878a2.25 2.25 0 1 1 1.5 0v.878a2.25 2.25 0 0 1-2.25 2.25h-1.5v2.128a2.251 2.251 0 1 1-1.5 0V8.5h-1.5A2.25 2.25 0 0 1 3.5 6.25v-.878a2.25 2.25 0 1 1 1.5 0M5 3.25a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0m6.75.75a.75.75 0 1 0 0-1.5.75.75 0 0 0 0 1.5m-3 8.75a.75.75 0 1 0-1.5 0 .75.75 0 0 0 1.5 0"/></svg><span class="text not-mobile">Fork</span>
							</a>
							<a class="ui basic label" href="/bogroll1234/WonderfulOpenXOperatingSystem/forks">
								0
							</a>
						</div>
						<div class="ui small modal" id="fork-repo-modal">
							<div class="header">
								You've already forked WonderfulOpenXOperatingSystem
							</div>
							<div class="content tw-text-left">
								<div class="ui list">
									
								</div>
								
							</div>
						</div>
					
				</div>
			
		</div>
		
		
		
	</div>

	<div class="ui container">
		<overflow-menu class="ui secondary pointing menu">
			
				<div class="overflow-menu-items">
					
					<a class="active item" href="/bogroll1234/WonderfulOpenXOperatingSystem/src/commit/4559b9988a20bc8066cdb82af480ca0245f77857">
						<svg viewBox="0 0 16 16" class="svg octicon-code" aria-hidden="true" width="16" height="16"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.75.75 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.75.75 0 0 1 .734.215m-6.56 0a.75.75 0 0 1 1.042.018.75.75 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.75.75 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"/></svg> Code
					</a>
					

					
						<a class="item" href="/bogroll1234/WonderfulOpenXOperatingSystem/issues">
							<svg viewBox="0 0 16 16" class="svg octicon-issue-opened" aria-hidden="true" width="16" height="16"><path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3"/><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0M1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0"/></svg> Issues
							
						</a>
					

					

					
						<a class="item" href="/bogroll1234/WonderfulOpenXOperatingSystem/pulls">
							<svg viewBox="0 0 16 16" class="svg octicon-git-pull-request" aria-hidden="true" width="16" height="16"><path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25m5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354M3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5m0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5m8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0"/></svg> Pull Requests
							
						</a>
					

					
						<a class="item" href="/bogroll1234/WonderfulOpenXOperatingSystem/actions">
							<svg viewBox="0 0 16 16" class="svg octicon-play" aria-hidden="true" width="16" height="16"><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0M1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0m4.879-2.773 4.264 2.559a.25.25 0 0 1 0 .428l-4.264 2.559A.25.25 0 0 1 6 10.559V5.442a.25.25 0 0 1 .379-.215"/></svg> Actions
							
						</a>
					

					
						<a href="/bogroll1234/WonderfulOpenXOperatingSystem/packages" class="item">
							<svg viewBox="0 0 16 16" class="svg octicon-package" aria-hidden="true" width="16" height="16"><path d="m8.878.392 5.25 3.045c.54.314.872.89.872 1.514v6.098a1.75 1.75 0 0 1-.872 1.514l-5.25 3.045a1.75 1.75 0 0 1-1.756 0l-5.25-3.045A1.75 1.75 0 0 1 1 11.049V4.951c0-.624.332-1.201.872-1.514L7.122.392a1.75 1.75 0 0 1 1.756 0M7.875 1.69l-4.63 2.685L8 7.133l4.755-2.758-4.63-2.685a.25.25 0 0 0-.25 0M2.5 5.677v5.372c0 .09.047.171.125.216l4.625 2.683V8.432Zm6.25 8.271 4.625-2.683a.25.25 0 0 0 .125-.216V5.677L8.75 8.432Z"/></svg> Packages
						</a>
					

					
					
						<a href="/bogroll1234/WonderfulOpenXOperatingSystem/projects" class="item">
							<svg viewBox="0 0 16 16" class="svg octicon-project" aria-hidden="true" width="16" height="16"><path d="M1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25V1.75C0 .784.784 0 1.75 0M1.5 1.75v12.5c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H1.75a.25.25 0 0 0-.25.25M11.75 3a.75.75 0 0 1 .75.75v7.5a.75.75 0 0 1-1.5 0v-7.5a.75.75 0 0 1 .75-.75m-8.25.75a.75.75 0 0 1 1.5 0v5.5a.75.75 0 0 1-1.5 0ZM8 3a.75.75 0 0 1 .75.75v3.5a.75.75 0 0 1-1.5 0v-3.5A.75.75 0 0 1 8 3"/></svg> Projects
							
						</a>
					

					
					<a class="item" href="/bogroll1234/WonderfulOpenXOperatingSystem/releases">
						<svg viewBox="0 0 16 16" class="svg octicon-tag" aria-hidden="true" width="16" height="16"><path d="M1 7.775V2.75C1 1.784 1.784 1 2.75 1h5.025c.464 0 .91.184 1.238.513l6.25 6.25a1.75 1.75 0 0 1 0 2.474l-5.026 5.026a1.75 1.75 0 0 1-2.474 0l-6.25-6.25A1.75 1.75 0 0 1 1 7.775m1.5 0c0 .066.026.13.073.177l6.25 6.25a.25.25 0 0 0 .354 0l5.025-5.025a.25.25 0 0 0 0-.354l-6.25-6.25a.25.25 0 0 0-.177-.073H2.75a.25.25 0 0 0-.25.25ZM6 5a1 1 0 1 1 0 2 1 1 0 0 1 0-2"/></svg> Releases
						
							<span class="ui small label">4</span>
						
					</a>
					

					
						<a class="item" href="/bogroll1234/WonderfulOpenXOperatingSystem/wiki">
							<svg viewBox="0 0 16 16" class="svg octicon-book" aria-hidden="true" width="16" height="16"><path d="M0 1.75A.75.75 0 0 1 .75 1h4.253c1.227 0 2.317.59 3 1.501A3.74 3.74 0 0 1 11.006 1h4.245a.75.75 0 0 1 .75.75v10.5a.75.75 0 0 1-.75.75h-4.507a2.25 2.25 0 0 0-1.591.659l-.622.621a.75.75 0 0 1-1.06 0l-.622-.621A2.25 2.25 0 0 0 5.258 13H.75a.75.75 0 0 1-.75-.75Zm7.251 10.324.004-5.073-.002-2.253A2.25 2.25 0 0 0 5.003 2.5H1.5v9h3.757a3.75 3.75 0 0 1 1.994.574M8.755 4.75l-.004 7.322a3.75 3.75 0 0 1 1.992-.572H14.5v-9h-3.495a2.25 2.25 0 0 0-2.25 2.25"/></svg> Wiki
						</a>
					

					

					
						<a class="item" href="/bogroll1234/WonderfulOpenXOperatingSystem/activity">
							<svg viewBox="0 0 16 16" class="svg octicon-pulse" aria-hidden="true" width="16" height="16"><path d="M6 2c.306 0 .582.187.696.471L10 10.731l1.304-3.26A.75.75 0 0 1 12 7h3.25a.75.75 0 0 1 0 1.5h-2.742l-1.812 4.528a.751.751 0 0 1-1.392 0L6 4.77 4.696 8.03A.75.75 0 0 1 4 8.5H.75a.75.75 0 0 1 0-1.5h2.742l1.812-4.529A.75.75 0 0 1 6 2"/></svg> Activity
						</a>
					

					

					
				</div>
			
		</overflow-menu>
	</div>
	<div class="ui tabs divider"></div>
</div>

	<div class="ui container fluid padded">
		

		

		




		<div class="repo-view-container">
			<div class="tw-flex tw-flex-col repo-view-file-tree-container not-mobile " >
				<div class="flex-text-block repo-button-row">
	<button class="ui compact basic icon button"
		data-global-click="onRepoViewFileTreeToggle" data-toggle-action="hide"
		data-tooltip-content="Hide file tree">
		<svg viewBox="0 0 16 16" class="svg octicon-sidebar-expand" aria-hidden="true" width="16" height="16"><path d="m4.177 7.823 2.396-2.396A.25.25 0 0 1 7 5.604v4.792a.25.25 0 0 1-.427.177L4.177 8.177a.25.25 0 0 1 0-.354"/><path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25H9.5v-13Zm12.5 13a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11v13Z"/></svg>
	</button>
	<b>Files</b>
</div>


<div id="view-file-tree" class="tw-overflow-auto tw-h-full is-loading"
	data-repo-link="/bogroll1234/WonderfulOpenXOperatingSystem"
	data-tree-path="buildenv/Dockerfile"
	data-current-ref-name-sub-url="commit/4559b9988a20bc8066cdb82af480ca0245f77857"
></div>

			</div>
			<div class="repo-view-content">
				

<div class="repo-view-content-data tw-hidden" data-document-title="WonderfulOpenXOperatingSystem/buildenv/Dockerfile at 4559b9988a20bc8066cdb82af480ca0245f77857" data-document-title-common="WonderfulOpenXOperatingSystem - tildegit"></div>


<div class="repo-button-row">
	<div class="repo-button-row-left">
	
		<button class="repo-view-file-tree-toggle-show ui compact basic button icon not-mobile tw-hidden"
			data-global-click="onRepoViewFileTreeToggle" data-toggle-action="show"
			data-tooltip-content="Show file tree">
			<svg viewBox="0 0 16 16" class="svg octicon-sidebar-collapse" aria-hidden="true" width="16" height="16"><path d="M6.823 7.823a.25.25 0 0 1 0 .354l-2.396 2.396A.25.25 0 0 1 4 10.396V5.604a.25.25 0 0 1 .427-.177Z"/><path d="M1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25V1.75C0 .784.784 0 1.75 0M1.5 1.75v12.5c0 .138.112.25.25.25H9.5v-13H1.75a.25.25 0 0 0-.25.25M11 14.5h3.25a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11Z"/></svg>
		</button>
	

	
<div class=""
	data-global-init="initRepoBranchTagSelector"
	data-text-release-compare="Compare"
	data-text-branches="Branches"
	data-text-tags="Tags"
	data-text-filter-branch="Filter branch"
	data-text-filter-tag="Find tag"
	data-text-default-branch-label="default"
	data-text-create-tag="Create tag %s"
	data-text-create-branch="Create branch %s"
	data-text-create-ref-from="from &#34;%s&#34;"
	data-text-no-results="No results found."
	data-text-view-all-branches="View all branches"
	data-text-view-all-tags="View all tags"

	data-current-repo-default-branch="main"
	data-current-repo-link="/bogroll1234/WonderfulOpenXOperatingSystem"
	data-current-tree-path="buildenv/Dockerfile"
	data-current-ref-type="commit"
	data-current-ref-short-name="4559b9988a20bc8066cdb82af480ca0245f77857"

	data-ref-link-template="{RepoLink}/src/{RefType}/{RefShortName}/{TreePath}"
	data-ref-form-action-template=""
	data-dropdown-fixed-text=""
	data-show-tab-branches="true"
	data-show-tab-tags="true"
	data-allow-create-new-ref="false"
	data-show-view-all-refs-entry="true"

	data-enable-feed="true"
>
	
	<div class="ui dropdown custom branch-selector-dropdown ellipsis-text-items">
		<div class="ui compact button branch-dropdown-button">
			<span class="flex-text-block gt-ellipsis">
				
					
						<svg viewBox="0 0 16 16" class="svg octicon-git-commit" aria-hidden="true" width="16" height="16"><path d="M11.93 8.5a4.002 4.002 0 0 1-7.86 0H.75a.75.75 0 0 1 0-1.5h3.32a4.002 4.002 0 0 1 7.86 0h3.32a.75.75 0 0 1 0 1.5Zm-1.43-.75a2.5 2.5 0 1 0-5 0 2.5 2.5 0 0 0 5 0"/></svg>
					
					<strong class="tw-inline-block gt-ellipsis">4559b9988a20bc8066cdb82af480ca0245f77857</strong>
				
			</span>
			<svg viewBox="0 0 16 16" class="dropdown icon svg octicon-triangle-down" aria-hidden="true" width="14" height="14"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427"/></svg>
		</div>
	</div>
</div>


	

	
	

	

	

	
		
		<span class="breadcrumb">
			<a class="section" href="/bogroll1234/WonderfulOpenXOperatingSystem/src/commit/4559b9988a20bc8066cdb82af480ca0245f77857" title="WonderfulOpenXOperatingSystem">WonderfulOpenXOperatingSystem</a><span class="breadcrumb-divider">/</span><span class="section"><a href="/bogroll1234/WonderfulOpenXOperatingSystem/src/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv" title="buildenv">buildenv</a></span><span class="breadcrumb-divider">/</span><span class="active section" title="Dockerfile">Dockerfile</span>
					<button class="btn interact-fg tw-mx-1" data-clipboard-text="buildenv/Dockerfile" data-tooltip-content="Copy path"><svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="14" height="14"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg></button></span>
	
	</div>

	<div class="repo-button-row-right">
		
		
		
	</div>
</div>

	<div  class="tab-size-4 non-diff-file-content"
	data-global-init="initRepoFileView" data-raw-file-link="/bogroll1234/WonderfulOpenXOperatingSystem/raw/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile">

	
		<div id="repo-file-commit-box" class="ui segment list-header tw-mb-4 tw-flex tw-justify-between">
			<div class="latest-commit">

	
		
			<img loading="lazy" alt class="ui avatar tw-align-middle" src="https://secure.gravatar.com/avatar/36850c470db3d6f16c4fa336a65b44de?d=identicon&s=48" title="Noah" width="24" height="24"/>
			<span class="author-wrapper" title="Noah"><strong>Noah</strong></span>
		
	

	<a href="/bogroll1234/WonderfulOpenXOperatingSystem/commit/55370b8ceb4674b5c38b29cafdab881f4c9d80c4" class="ui label commit-id-short " rel="nofollow">55370b8ceb</a>

	


	
	<span class="grey commit-summary" title="upload source original"><span class="message-wrapper"><a href="/bogroll1234/WonderfulOpenXOperatingSystem/commit/55370b8ceb4674b5c38b29cafdab881f4c9d80c4" class="muted">upload source original</a></span>
		
	</span>

</div>

			
				
					<div class="text grey age flex-text-block">
						<relative-time prefix="" tense="past" datetime="2024-12-12T20:29:03Z" data-tooltip-content data-tooltip-interactive="true">2024-12-12 20:29:03 +00:00</relative-time>
					</div>
				
			
		</div>
	

	<h4 class="file-header ui top attached header tw-flex tw-items-center tw-justify-between tw-flex-wrap">
		<div class="file-header-left tw-flex tw-items-center tw-py-2 tw-pr-4">
			
				<div class="file-info tw-font-mono">
	
	
		<div class="file-info-entry">
			11 lines
		</div>
	
	
		<div class="file-info-entry">
			<span class="file-info-size">244 B</span>
		</div>
	
	
	
		<div class="file-info-entry">
			Docker
		</div>
	
	
	
	
	
</div>

			
		</div>
		<div class="file-header-right file-actions flex-text-block tw-flex-wrap">
			
			<div class="ui compact icon buttons file-view-toggle-buttons tw-hidden">
				
				<a href="?display=source" class="ui mini basic button file-view-toggle-source active" data-tooltip-content="View Source"><svg viewBox="0 0 16 16" class="svg octicon-code" aria-hidden="true" width="15" height="15"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.75.75 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.75.75 0 0 1 .734.215m-6.56 0a.75.75 0 0 1 1.042.018.75.75 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.75.75 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"/></svg></a>
				
				<a href="?display=rendered" class="ui mini basic button file-view-toggle-rendered " data-tooltip-content="View Rendered"><svg viewBox="0 0 16 16" class="svg octicon-file" aria-hidden="true" width="15" height="15"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914z"/></svg></a>
			</div>
			
				<div class="ui buttons tw-mr-1">
					<a class="ui mini basic button" href="/bogroll1234/WonderfulOpenXOperatingSystem/raw/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile">Raw</a>
					
					
						<a class="ui mini basic button" href="/bogroll1234/WonderfulOpenXOperatingSystem/blame/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile">Blame</a>
					
					<a class="ui mini basic button" href="/bogroll1234/WonderfulOpenXOperatingSystem/commits/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile">History</a>
					
				</div>
				<a download class="btn-octicon" data-tooltip-content="Download file" href="/bogroll1234/WonderfulOpenXOperatingSystem/raw/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile"><svg viewBox="0 0 16 16" class="svg octicon-download" aria-hidden="true" width="16" height="16"><path d="M2.75 14A1.75 1.75 0 0 1 1 12.25v-2.5a.75.75 0 0 1 1.5 0v2.5c0 .138.112.25.25.25h10.5a.25.25 0 0 0 .25-.25v-2.5a.75.75 0 0 1 1.5 0v2.5A1.75 1.75 0 0 1 13.25 14Z"/><path d="M7.25 7.689V2a.75.75 0 0 1 1.5 0v5.689l1.97-1.969a.749.749 0 1 1 1.06 1.06l-3.25 3.25a.75.75 0 0 1-1.06 0L4.22 6.78a.749.749 0 1 1 1.06-1.06z"/></svg></a>
				<a class="btn-octicon " data-global-click="onCopyContentButtonClick"
					
					data-tooltip-content="Copy content"
				><svg viewBox="0 0 16 16" class="svg octicon-copy" aria-hidden="true" width="16" height="16"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"/><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"/></svg></a>
				
				<a class="btn-octicon" href="/bogroll1234/WonderfulOpenXOperatingSystem/rss/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile" data-tooltip-content="RSS Feed">
					<svg viewBox="0 0 16 16" class="svg octicon-rss" aria-hidden="true" width="16" height="16"><path d="M2.002 2.725a.75.75 0 0 1 .797-.699C8.79 2.42 13.58 7.21 13.974 13.201a.75.75 0 0 1-1.497.098 10.5 10.5 0 0 0-9.776-9.776.747.747 0 0 1-.7-.798ZM2.84 7.05h-.002a7 7 0 0 1 6.113 6.111.75.75 0 0 1-1.49.178 5.5 5.5 0 0 0-4.8-4.8.75.75 0 0 1 .179-1.489M2 13a1 1 0 1 1 2 0 1 1 0 0 1-2 0"/></svg>
				</a>
				
				
					
						<span class="btn-octicon disabled" data-tooltip-content="You must be on a branch to make or propose changes to this file."><svg viewBox="0 0 16 16" class="svg octicon-pencil" aria-hidden="true" width="16" height="16"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.25.25 0 0 0-.064.108l-.558 1.953 1.953-.558a.25.25 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"/></svg></span>
					
					
						<span class="btn-octicon disabled" data-tooltip-content="You must be on a branch to make or propose changes to this file."><svg viewBox="0 0 16 16" class="svg octicon-trash" aria-hidden="true" width="16" height="16"><path d="M11 1.75V3h2.25a.75.75 0 0 1 0 1.5H2.75a.75.75 0 0 1 0-1.5H5V1.75C5 .784 5.784 0 6.75 0h2.5C10.216 0 11 .784 11 1.75M4.496 6.675l.66 6.6a.25.25 0 0 0 .249.225h5.19a.25.25 0 0 0 .249-.225l.66-6.6a.75.75 0 0 1 1.492.149l-.66 6.6A1.75 1.75 0 0 1 10.595 15h-5.19a1.75 1.75 0 0 1-1.741-1.575l-.66-6.6a.75.75 0 1 1 1.492-.15M6.5 1.75V3h3V1.75a.25.25 0 0 0-.25-.25h-2.5a.25.25 0 0 0-.25.25"/></svg></span>
					
				
			
			
		</div>
	</h4>

	<div class="ui bottom attached table unstackable segment">
		
			
	


		
		<div class="file-view code-view">
			
				<table>
					<tbody>
					
						
						<tr>
							<td class="lines-num"><span id="L1" data-line-number="1"></span></td>
							
							<td rel="L1" class="lines-code chroma"><code class="code-inner"><span class="k">FROM</span><span class="w"> </span><span class="s">randomdude/gcc-cross-x86_64-elf</span><span class="w"></span><span class="k"></span><span class="w"></span><span class="s"></span><span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L2" data-line-number="2"></span></td>
							
							<td rel="L2" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L3" data-line-number="3"></span></td>
							
							<td rel="L3" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="k">RUN</span> apt-get update<span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L4" data-line-number="4"></span></td>
							
							<td rel="L4" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="k">RUN</span> apt-get upgrade -y<span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L5" data-line-number="5"></span></td>
							
							<td rel="L5" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="k">RUN</span> apt-get install -y nasm<span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L6" data-line-number="6"></span></td>
							
							<td rel="L6" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="k">RUN</span> apt-get install -y xorriso<span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L7" data-line-number="7"></span></td>
							
							<td rel="L7" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="k">RUN</span> apt-get install -y grub-pc-bin<span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L8" data-line-number="8"></span></td>
							
							<td rel="L8" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="k">RUN</span> apt-get install -y grub-common<span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L9" data-line-number="9"></span></td>
							
							<td rel="L9" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L10" data-line-number="10"></span></td>
							
							<td rel="L10" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="k">VOLUME</span><span class="w"> </span><span class="s">/root/env</span><span class="w"></span><span class="k"></span><span class="w"></span><span class="s"></span><span class="err">
</span></code></td>
						</tr>
					
						
						<tr>
							<td class="lines-num"><span id="L11" data-line-number="11"></span></td>
							
							<td rel="L11" class="lines-code chroma"><code class="code-inner"><span class="err"></span><span class="k">WORKDIR</span><span class="w"> </span><span class="s">/root/env</span><span class="w"></span><span class="k"></span><span class="w"></span><span class="s"></span></code></td>
						</tr>
					
					</tbody>
				</table>
			
		</div>

		<div class="code-line-menu tippy-target">
			
			<a class="item ref-in-new-issue" role="menuitem" data-url-issue-new="/bogroll1234/WonderfulOpenXOperatingSystem/issues/new" data-url-param-body-link="/bogroll1234/WonderfulOpenXOperatingSystem/src/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile" rel="nofollow noindex">Reference in New Issue</a>
			
			<a class="item view_git_blame" role="menuitem" href="/bogroll1234/WonderfulOpenXOperatingSystem/blame/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile">View Git Blame</a>
			<a class="item copy-line-permalink" role="menuitem" data-url="/bogroll1234/WonderfulOpenXOperatingSystem/src/commit/4559b9988a20bc8066cdb82af480ca0245f77857/buildenv/Dockerfile">Copy Permalink</a>
		</div>
	</div>
</div>



			</div>
		</div>
	</div>
</div>


		
	</div>
	
	<footer class="page-footer" role="group" aria-label="Footer">
	<div class="left-links" role="contentinfo" aria-label="About Software">
		
			<a target="_blank" rel="noopener noreferrer" href="https://about.gitea.com">Powered by Gitea</a>
		
		
			Version:
			
				1.25.2
			
		
		
			Page: <strong>28ms</strong>
			Template: <strong>2ms</strong>
		
	</div>
	<div class="right-links" role="group" aria-label="Links">
		<div class="ui dropdown upward">
			<span class="flex-text-inline"><svg viewBox="0 0 16 16" class="svg octicon-globe" aria-hidden="true" width="14" height="14"><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0M5.78 8.75a9.64 9.64 0 0 0 1.363 4.177q.383.64.857 1.215c.245-.296.551-.705.857-1.215A9.64 9.64 0 0 0 10.22 8.75Zm4.44-1.5a9.64 9.64 0 0 0-1.363-4.177c-.307-.51-.612-.919-.857-1.215a10 10 0 0 0-.857 1.215A9.64 9.64 0 0 0 5.78 7.25Zm-5.944 1.5H1.543a6.51 6.51 0 0 0 4.666 5.5q-.184-.271-.352-.552c-.715-1.192-1.437-2.874-1.581-4.948m-2.733-1.5h2.733c.144-2.074.866-3.756 1.58-4.948q.18-.295.353-.552a6.51 6.51 0 0 0-4.666 5.5m10.181 1.5c-.144 2.074-.866 3.756-1.58 4.948q-.18.296-.353.552a6.51 6.51 0 0 0 4.666-5.5Zm2.733-1.5a6.51 6.51 0 0 0-4.666-5.5q.184.272.353.552c.714 1.192 1.436 2.874 1.58 4.948Z"/></svg> English</span>
			<div class="menu language-menu">
				<a lang="id-ID" data-url="/?lang=id-ID" class="item ">Bahasa Indonesia</a>
				<a lang="de-DE" data-url="/?lang=de-DE" class="item ">Deutsch</a>
				<a lang="en-US" data-url="/?lang=en-US" class="item selected">English</a>
				<a lang="es-ES" data-url="/?lang=es-ES" class="item ">Español</a>
				<a lang="fr-FR" data-url="/?lang=fr-FR" class="item ">Français</a>
				<a lang="ga-IE" data-url="/?lang=ga-IE" class="item ">Gaeilge</a>
				<a lang="it-IT" data-url="/?lang=it-IT" class="item ">Italiano</a>
				<a lang="lv-LV" data-url="/?lang=lv-LV" class="item ">Latviešu</a>
				<a lang="hu-HU" data-url="/?lang=hu-HU" class="item ">Magyar nyelv</a>
				<a lang="nl-NL" data-url="/?lang=nl-NL" class="item ">Nederlands</a>
				<a lang="pl-PL" data-url="/?lang=pl-PL" class="item ">Polski</a>
				<a lang="pt-PT" data-url="/?lang=pt-PT" class="item ">Português de Portugal</a>
				<a lang="pt-BR" data-url="/?lang=pt-BR" class="item ">Português do Brasil</a>
				<a lang="fi-FI" data-url="/?lang=fi-FI" class="item ">Suomi</a>
				<a lang="sv-SE" data-url="/?lang=sv-SE" class="item ">Svenska</a>
				<a lang="tr-TR" data-url="/?lang=tr-TR" class="item ">Türkçe</a>
				<a lang="cs-CZ" data-url="/?lang=cs-CZ" class="item ">Čeština</a>
				<a lang="el-GR" data-url="/?lang=el-GR" class="item ">Ελληνικά</a>
				<a lang="bg-BG" data-url="/?lang=bg-BG" class="item ">Български</a>
				<a lang="ru-RU" data-url="/?lang=ru-RU" class="item ">Русский</a>
				<a lang="uk-UA" data-url="/?lang=uk-UA" class="item ">Українська</a>
				<a lang="fa-IR" data-url="/?lang=fa-IR" class="item ">فارسی</a>
				<a lang="ml-IN" data-url="/?lang=ml-IN" class="item ">മലയാളം</a>
				<a lang="ja-JP" data-url="/?lang=ja-JP" class="item ">日本語</a>
				<a lang="zh-CN" data-url="/?lang=zh-CN" class="item ">简体中文</a>
				<a lang="zh-TW" data-url="/?lang=zh-TW" class="item ">繁體中文（台灣）</a>
				<a lang="zh-HK" data-url="/?lang=zh-HK" class="item ">繁體中文（香港）</a>
				<a lang="ko-KR" data-url="/?lang=ko-KR" class="item ">한국어</a>
				</div>
		</div>
		<a href="/_/static/assets/licenses.txt">Licenses</a>
		<a href="/api/swagger">API</a>
		<a class="item" href="https://tildeverse.org">tildeverse.org</a>

	</div>
</footer>

	
</body>
</html>

